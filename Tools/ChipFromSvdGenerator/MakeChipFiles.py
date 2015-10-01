﻿import os
from os.path import join, basename
from cmsis_svd.parser import SVDParser
import site
import json
import re
from FormattingTools import formatNamespace,formatVariable,formatEnumValue,\
    useEnumeratedValues,getAccess,getKey,clearBitsFromRange,formatCpuName
import argparse
import sys

def formatIoPorts(input):
    if ',' in input:
        return input.split(',')
    elif '-' in input:
        m = input.split('-')
        if m[1].isdigit():
            return range(int(m[1]),int(m[2]))
        elif len(m[1]) == 1:
            return [chr(i) for i in range(ord(m[0][0]),ord(m[1][0])+1)]
    else:
        return [input]

def parseIo(extention,device,path):
    outFile = open(os.path.join(path,"Io.hpp"),'w',encoding='utf-8')
    outFile.write('#pragma once\n#include "Io/Io.hpp"\n#include "Register/Register.hpp"\n')
    outFile.write("namespace Kvasir{\n    namespace Io{\n")
    io = getKey(extention,['kvasir','io'])
    for key in io:
        if key!="default":
            type = getKey(io,[key,'type'])
            if type == 'group':
                for port in formatIoPorts(getKey(io,[key,'ports'])):
                    peripheral = getKey(io,[key,'peripheral']).replace('%s',port)
                    register = getKey(io,[key,'register']).replace('%s',port)
                    address = getKey(device,[peripheral]).base_address + getKey(device,[peripheral,register]).address_offset
                    reserved = 0xFFFFFFFF
                    for field in getKey(device,[peripheral,register]).fields:
                        reserved = clearBitsFromRange(field.bit_offset + field.bit_width -1,field.bit_offset,reserved)
                    portNumber = port
                    if not portNumber.isdigit():
                        portNumber = ord(portNumber)-ord('A')
                    
                    if key == "read":
                        action = "ReadAction"
                    else:
                        action = "WriteLiteralAction<(%s<<Pin)>" % getKey(io,[key,'value'])
                    outFile.write("        template<int Pin>\n")
                    outFile.write("        struct MakeAction<Action::%s,PinLocation<%d,Pin>> :\n" % (key.capitalize(),portNumber))
                    outFile.write("            Register::Action<Register::BitLocation<Register::Address<0x%08x,0x%08x>,(1<<Pin)>,Register::%s>{};\n\n"\
                        % (address,reserved,action))
    outFile.write("    }\n}")

def parseRegister(register, baseAddress, prefix):
    reservedBits = 0xFFFFFFFF
    fieldOut = ""
    for field in register.fields:
        msb = field.bit_offset+field.bit_width-1
        lsb = field.bit_offset
        fieldType = "unsigned"
        fieldName = formatVariable(field.name)
        fieldOut += "        ///%s\n" % field.description
        if useEnumeratedValues(field.enumerated_values,field.bit_width):
            fieldType = "%sVal" % (fieldName)
            fieldOut += "        enum class %s {\n" % fieldType
            cValuesOut = ""
            for v in field.enumerated_values:
                if v.value is not None and v.is_default is None:     #some value are defaults, we ignore them
                    valName = formatEnumValue(v.name)
                    fieldOut+="            %s=0x%08x,     ///<%s\n" % (valName,v.value,v.description)
                    cValuesOut+="            constexpr MPL::Value<%sVal,%sVal::%s> %s{};\n" % (fieldName,fieldName,valName,valName)
            fieldOut += "        };\n        namespace %sValC{\n%s        }\n" % (fieldName,cValuesOut)
        fieldOut += "        constexpr Register::BitLocation<Addr,Register::maskFromRange(%d,%d),Register::%s,%s> %s{}; \n" % (msb,lsb,getAccess(register,field),fieldType,fieldName)
        reservedBits = clearBitsFromRange(msb,lsb,reservedBits)
            
    regType = "unsigned"
    if register.size is not None and register.size is 8:
        regType = "unsigned char"
    out = "    namespace %s{    ///<%s\n" % (formatNamespace("%s%s" % (prefix, register.name)),register.description)
    out += "        using Addr = Register::Address<0x%08x,0x%08x,0,%s>;\n" % (baseAddress + register.address_offset,reservedBits,regType)
    out += fieldOut 
    out +=	"    }\n"
    return out 

def parseRegisters(registers,baseAddress,prefix):
    out = ""
    for register in registers:
        out += parseRegister(register,baseAddress,prefix)
    return out

def parsePeripheral(peripheral):
    out = "//%s\n" % (peripheral.description)
    out += parseRegisters(peripheral.registers,peripheral.base_address,peripheral.prepend_to_name)
    return out
    
def parseFile(company,file):
    print("Parsing %s,%s " % (company,file))
    parser = SVDParser.for_packaged_svd(company, file + ".svd",1,1)
    extention = []
    jsonPath = os.path.join(os.path.dirname(os.path.abspath(__file__)),"Extention",company,file+".json")
    #print(jsonPath)
    device = parser.get_device()
    if os.path.isfile(jsonPath):
        extFile = open(jsonPath,"r",encoding='utf-8')
        extention = json.load(extFile)
    subdir = formatCpuName(getKey(extention,["device","cpu","name"]),device)
    chipDir = os.path.join('..','..','Lib','Chip')
    subdir = os.path.join(chipDir, subdir)
    if not os.path.exists(subdir):
        os.makedirs(subdir)
    subdir = os.path.join(subdir,company)
    if not os.path.exists(subdir):
        os.makedirs(subdir)
    subdir = os.path.join(subdir,file)
    if not os.path.exists(subdir):
        os.makedirs(subdir)
    chipText = "#pragma once \n"
    if getKey(extention,["kvasir","io"]):
        parseIo(extention,device,subdir)
        chipText += "#include \"%s\"\n" % (os.path.join(subdir,"Io.hpp"))
    for peripheral in device.peripherals:
        if peripheral.name is not None:
            outPath = os.path.join(subdir,peripheral.name+".hpp")
            chipText += "#include \"%s\"\n" % (outPath)
            out = "#pragma once \n#include \"Register/Utility.hpp\"\n"
            out += "namespace Kvasir {\n"
            out += parsePeripheral(peripheral)
            out += "}\n"

            outFile = open(outPath, 'w',encoding='utf-8')
            outFile.write(out)
        else:
            print("error no name in %s" % (file))
    outFile = open(os.path.join(chipDir,file + ".hpp"), 'w',encoding='utf-8')
    outFile.write(chipText)
    
def parseAll(path):
    for root, dirs, files in os.walk(path):
        print("processing: " + basename(root))
        if len(files) and basename(root) != "ARM_SAMPLE":
            for file in files:
                filename, file_extension = os.path.splitext(file)
                if file_extension == ".svd":
                    parseFile(path,basename(root),filename)
def parseCompany(path,company):
    for root, dirs, files in os.walk(os.join(path,company)):
        for file in files:
            filename, file_extension = os.path.splitext(file)
            if file_extension == ".svd":
                parseFile(path,company,filename)
                
parser = argparse.ArgumentParser(description='Generate chip files')
parser.add_argument('-f,--file', dest='file', help='file name to parse')
parser.add_argument('-p,--path', dest='path', default=site.getsitepackages()[1] + '\cmsis_svd\data', help='folder to parse')
parser.add_argument('-c,--company', dest='company', help='company to parse')

args = parser.parse_args()

if args.file is None and args.company is None:
    parseAll(path)
elif args.file is None:
    parseFolder(args.path, args.company)
elif args.company is not None:
    parseFile(args.company,args.file)

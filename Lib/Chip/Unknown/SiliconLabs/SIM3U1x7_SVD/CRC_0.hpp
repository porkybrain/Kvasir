#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40028000,0xfffff0c8,0,unsigned>;
        ///Seed Initialization Enable. 
        enum class SinitenVal {
            disabled=0x00000000,     ///<Do not initialize the CRC module to the value set by the SEED bit.
            enabled=0x00000001,     ///<Initialize the CRC module to the value set by the SEED bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SinitenVal> siniten{}; 
        namespace SinitenValC{
            constexpr Register::FieldValue<decltype(siniten),SinitenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(siniten),SinitenVal::enabled> enabled{};
        }
        ///Seed Setting. 
        enum class SeedVal {
            allZeroes=0x00000000,     ///<CRC seed value is all 0's (0x00000000)
            allOnes=0x00000001,     ///<CRC seed value is all 1's (0xFFFFFFFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SeedVal> seed{}; 
        namespace SeedValC{
            constexpr Register::FieldValue<decltype(seed),SeedVal::allZeroes> allZeroes{};
            constexpr Register::FieldValue<decltype(seed),SeedVal::allOnes> allOnes{};
        }
        ///CRC Enable. 
        enum class CrcenVal {
            disabled=0x00000000,     ///<Disable CRC operations.
            enabled=0x00000001,     ///<Enable CRC operations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CrcenVal> crcen{}; 
        namespace CrcenValC{
            constexpr Register::FieldValue<decltype(crcen),CrcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crcen),CrcenVal::enabled> enabled{};
        }
        ///Polynomial Selection. 
        enum class PolyselVal {
            crc3204c11db7=0x00000000,     ///<Select 32-bit polynomial: 0x04C11DB7.
            crc161021=0x00000001,     ///<Select 16-bit polynomial: 0x1021.
            crc163d65=0x00000002,     ///<Select 16-bit polynomial: 0x3D65.
            crc168005=0x00000003,     ///<Select 16-bit polynomial: 0x8005.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PolyselVal> polysel{}; 
        namespace PolyselValC{
            constexpr Register::FieldValue<decltype(polysel),PolyselVal::crc3204c11db7> crc3204c11db7{};
            constexpr Register::FieldValue<decltype(polysel),PolyselVal::crc161021> crc161021{};
            constexpr Register::FieldValue<decltype(polysel),PolyselVal::crc163d65> crc163d65{};
            constexpr Register::FieldValue<decltype(polysel),PolyselVal::crc168005> crc168005{};
        }
        ///Byte Mode Enable. 
        enum class BmdenVal {
            disabled=0x00000000,     ///<Disable byte mode (word/byte width is determined automatically by the hardware).
            enabled=0x00000001,     ///<Enable byte mode (all writes are considered as bytes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,BmdenVal> bmden{}; 
        namespace BmdenValC{
            constexpr Register::FieldValue<decltype(bmden),BmdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bmden),BmdenVal::enabled> enabled{};
        }
        ///Byte-Level Bit Reversal Enable. 
        enum class BbrenVal {
            disabled=0x00000000,     ///<No byte-level bit reversal (input is same order as written).
            enabled=0x00000001,     ///<Byte-level bit reversal enabled (the bits in each byte are reversed).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BbrenVal> bbren{}; 
        namespace BbrenValC{
            constexpr Register::FieldValue<decltype(bbren),BbrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bbren),BbrenVal::enabled> enabled{};
        }
        ///Input Processing Order. 
        enum class OrderVal {
            noReorder=0x00000000,     ///<No byte reorientation (output is same order as input).
            bigEndian16=0x00000001,     ///<Swap for 16-bit big endian order (input: B3 B2 B1 B0, output: B2 B3 B0 B1).
            bigEndian32=0x00000002,     ///<Swap for 32-bit big endian order (input: B3 B2 B1 B0, output: B0 B1 B2 B3).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,OrderVal> order{}; 
        namespace OrderValC{
            constexpr Register::FieldValue<decltype(order),OrderVal::noReorder> noReorder{};
            constexpr Register::FieldValue<decltype(order),OrderVal::bigEndian16> bigEndian16{};
            constexpr Register::FieldValue<decltype(order),OrderVal::bigEndian32> bigEndian32{};
        }
    }
    namespace Nonedata{    ///<Input/Result Data
        using Addr = Register::Address<0x40028010,0x00000000,0,unsigned>;
        ///Input/Result Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Nonerdata{    ///<Bit-Reversed Output Data
        using Addr = Register::Address<0x40028020,0x00000000,0,unsigned>;
        ///Bit-Reversed Output Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdata{}; 
        namespace RdataValC{
        }
    }
}

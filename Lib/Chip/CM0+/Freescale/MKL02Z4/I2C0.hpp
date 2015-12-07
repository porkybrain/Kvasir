#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-Integrated Circuit
    namespace I2c0A1{    ///<I2C Address Register 1
        using Addr = Register::Address<0x40066000,0xffffff01,0,unsigned char>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> ad{}; 
        namespace AdValC{
        }
    }
    namespace I2c0F{    ///<I2C Frequency Divider register
        using Addr = Register::Address<0x40066001,0xffffff00,0,unsigned char>;
        ///ClockRate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> icr{}; 
        namespace IcrValC{
        }
        ///no description available
        enum class MultVal {
            v00=0x00000000,     ///<mul = 1
            v01=0x00000001,     ///<mul = 2
            v10=0x00000002,     ///<mul = 4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,MultVal> mult{}; 
        namespace MultValC{
            constexpr Register::FieldValue<decltype(mult),MultVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mult),MultVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mult),MultVal::v10> v10{};
        }
    }
    namespace I2c0C1{    ///<I2C Control Register 1
        using Addr = Register::Address<0x40066002,0xffffff01,0,unsigned char>;
        ///Wakeup Enable
        enum class WuenVal {
            v0=0x00000000,     ///<Normal operation. No interrupt generated when address matching in low power mode.
            v1=0x00000001,     ///<Enables the wakeup function in low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WuenVal> wuen{}; 
        namespace WuenValC{
            constexpr Register::FieldValue<decltype(wuen),WuenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuen),WuenVal::v1> v1{};
        }
        ///Repeat START
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsta{}; 
        namespace RstaValC{
        }
        ///Transmit Acknowledge Enable
        enum class TxakVal {
            v0=0x00000000,     ///<An acknowledge signal is sent to the bus on the following receiving byte
            v1=0x00000001,     ///<No acknowledge signal is sent to the bus on the following receiving data byte.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxakVal> txak{}; 
        namespace TxakValC{
            constexpr Register::FieldValue<decltype(txak),TxakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txak),TxakVal::v1> v1{};
        }
        ///Transmit Mode Select
        enum class TxVal {
            v0=0x00000000,     ///<Receive
            v1=0x00000001,     ///<Transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx),TxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tx),TxVal::v1> v1{};
        }
        ///Master Mode Select
        enum class MstVal {
            v0=0x00000000,     ///<Slave mode
            v1=0x00000001,     ///<Master mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MstVal> mst{}; 
        namespace MstValC{
            constexpr Register::FieldValue<decltype(mst),MstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mst),MstVal::v1> v1{};
        }
        ///I2C Interrupt Enable
        enum class IicieVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IicieVal> iicie{}; 
        namespace IicieValC{
            constexpr Register::FieldValue<decltype(iicie),IicieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicie),IicieVal::v1> v1{};
        }
        ///I2C Enable
        enum class IicenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IicenVal> iicen{}; 
        namespace IicenValC{
            constexpr Register::FieldValue<decltype(iicen),IicenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicen),IicenVal::v1> v1{};
        }
    }
    namespace I2c0S{    ///<I2C Status register
        using Addr = Register::Address<0x40066003,0xffffff00,0,unsigned char>;
        ///Receive Acknowledge
        enum class RxakVal {
            v0=0x00000000,     ///<Acknowledge signal was received after the completion of one byte of data transmission on the bus
            v1=0x00000001,     ///<No acknowledge signal detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxakVal> rxak{}; 
        namespace RxakValC{
            constexpr Register::FieldValue<decltype(rxak),RxakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxak),RxakVal::v1> v1{};
        }
        ///Interrupt Flag
        enum class IicifVal {
            v0=0x00000000,     ///<No interrupt pending
            v1=0x00000001,     ///<Interrupt pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IicifVal> iicif{}; 
        namespace IicifValC{
            constexpr Register::FieldValue<decltype(iicif),IicifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicif),IicifVal::v1> v1{};
        }
        ///Slave Read/Write
        enum class SrwVal {
            v0=0x00000000,     ///<Slave receive, master writing to slave
            v1=0x00000001,     ///<Slave transmit, master reading from slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SrwVal> srw{}; 
        namespace SrwValC{
            constexpr Register::FieldValue<decltype(srw),SrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srw),SrwVal::v1> v1{};
        }
        ///Range Address Match
        enum class RamVal {
            v0=0x00000000,     ///<Not addressed
            v1=0x00000001,     ///<Addressed as a slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RamVal> ram{}; 
        namespace RamValC{
            constexpr Register::FieldValue<decltype(ram),RamVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ram),RamVal::v1> v1{};
        }
        ///Arbitration Lost
        enum class ArblVal {
            v0=0x00000000,     ///<Standard bus operation.
            v1=0x00000001,     ///<Loss of arbitration.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ArblVal> arbl{}; 
        namespace ArblValC{
            constexpr Register::FieldValue<decltype(arbl),ArblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(arbl),ArblVal::v1> v1{};
        }
        ///Bus Busy
        enum class BusyVal {
            v0=0x00000000,     ///<Bus is idle
            v1=0x00000001,     ///<Bus is busy
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy),BusyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busy),BusyVal::v1> v1{};
        }
        ///Addressed As A Slave
        enum class IaasVal {
            v0=0x00000000,     ///<Not addressed
            v1=0x00000001,     ///<Addressed as a slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IaasVal> iaas{}; 
        namespace IaasValC{
            constexpr Register::FieldValue<decltype(iaas),IaasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iaas),IaasVal::v1> v1{};
        }
        ///Transfer Complete Flag
        enum class TcfVal {
            v0=0x00000000,     ///<Transfer in progress
            v1=0x00000001,     ///<Transfer complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TcfVal> tcf{}; 
        namespace TcfValC{
            constexpr Register::FieldValue<decltype(tcf),TcfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcf),TcfVal::v1> v1{};
        }
    }
    namespace I2c0D{    ///<I2C Data I/O register
        using Addr = Register::Address<0x40066004,0xffffff00,0,unsigned char>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace I2c0C2{    ///<I2C Control Register 2
        using Addr = Register::Address<0x40066005,0xffffff00,0,unsigned char>;
        ///Slave Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ad{}; 
        namespace AdValC{
        }
        ///Range Address Matching Enable
        enum class RmenVal {
            v0=0x00000000,     ///<Range mode disabled. No address match occurs for an address within the range of values of the A1 and RA registers.
            v1=0x00000001,     ///<Range mode enabled. Address matching occurs when a slave receives an address within the range of values of the A1 and RA registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RmenVal> rmen{}; 
        namespace RmenValC{
            constexpr Register::FieldValue<decltype(rmen),RmenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rmen),RmenVal::v1> v1{};
        }
        ///Slave Baud Rate Control
        enum class SbrcVal {
            v0=0x00000000,     ///<The slave baud rate follows the master baud rate and clock stretching may occur
            v1=0x00000001,     ///<Slave baud rate is independent of the master baud rate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SbrcVal> sbrc{}; 
        namespace SbrcValC{
            constexpr Register::FieldValue<decltype(sbrc),SbrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbrc),SbrcVal::v1> v1{};
        }
        ///High Drive Select
        enum class HdrsVal {
            v0=0x00000000,     ///<Normal drive mode
            v1=0x00000001,     ///<High drive mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HdrsVal> hdrs{}; 
        namespace HdrsValC{
            constexpr Register::FieldValue<decltype(hdrs),HdrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hdrs),HdrsVal::v1> v1{};
        }
        ///Address Extension
        enum class AdextVal {
            v0=0x00000000,     ///<7-bit address scheme
            v1=0x00000001,     ///<10-bit address scheme
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AdextVal> adext{}; 
        namespace AdextValC{
            constexpr Register::FieldValue<decltype(adext),AdextVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adext),AdextVal::v1> v1{};
        }
        ///General Call Address Enable
        enum class GcaenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,GcaenVal> gcaen{}; 
        namespace GcaenValC{
            constexpr Register::FieldValue<decltype(gcaen),GcaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gcaen),GcaenVal::v1> v1{};
        }
    }
    namespace I2c0Flt{    ///<I2C Programmable Input Glitch Filter register
        using Addr = Register::Address<0x40066006,0xffffff00,0,unsigned char>;
        ///I2C Programmable Filter Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> flt{}; 
        namespace FltValC{
        }
        ///I2C Bus Start Detect Flag
        enum class StartfVal {
            v0=0x00000000,     ///<No start happens on I2C bus
            v1=0x00000001,     ///<Start detected on I2C bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,StartfVal> startf{}; 
        namespace StartfValC{
            constexpr Register::FieldValue<decltype(startf),StartfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(startf),StartfVal::v1> v1{};
        }
        ///I2C Bus Stop or Start Interrupt Enable
        enum class SsieVal {
            v0=0x00000000,     ///<Stop or start detection interrupt is disabled
            v1=0x00000001,     ///<Stop or start detection interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SsieVal> ssie{}; 
        namespace SsieValC{
            constexpr Register::FieldValue<decltype(ssie),SsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ssie),SsieVal::v1> v1{};
        }
        ///I2C Bus Stop Detect Flag
        enum class StopfVal {
            v0=0x00000000,     ///<No stop happens on I2C bus
            v1=0x00000001,     ///<Stop detected on I2C bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,StopfVal> stopf{}; 
        namespace StopfValC{
            constexpr Register::FieldValue<decltype(stopf),StopfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopf),StopfVal::v1> v1{};
        }
        ///Stop Hold Enable
        enum class ShenVal {
            v0=0x00000000,     ///<Stop holdoff is disabled. The MCU's entry to stop mode is not gated.
            v1=0x00000001,     ///<Stop holdoff is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ShenVal> shen{}; 
        namespace ShenValC{
            constexpr Register::FieldValue<decltype(shen),ShenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(shen),ShenVal::v1> v1{};
        }
    }
    namespace I2c0Ra{    ///<I2C Range Address register
        using Addr = Register::Address<0x40066007,0xffffff01,0,unsigned char>;
        ///Range Slave Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> rad{}; 
        namespace RadValC{
        }
    }
}

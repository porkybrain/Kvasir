#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Periodic Interrupt Timer
    namespace Pit0Mcr{    ///<PIT Module Control Register
        using Addr = Register::Address<0x4002d000,0xfffffffc,0,unsigned>;
        ///Freeze
        enum class FrzVal {
            v0=0x00000000,     ///<Timers continue to run in Debug mode.
            v1=0x00000001,     ///<Timers are stopped in Debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FrzVal> frz{}; 
        namespace FrzValC{
            constexpr Register::FieldValue<decltype(frz),FrzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frz),FrzVal::v1> v1{};
        }
        ///Module Disable - (PIT section)
        enum class MdisVal {
            v0=0x00000000,     ///<Clock for standard PIT timers is enabled.
            v1=0x00000001,     ///<Clock for standard PIT timers is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,MdisVal> mdis{}; 
        namespace MdisValC{
            constexpr Register::FieldValue<decltype(mdis),MdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdis),MdisVal::v1> v1{};
        }
    }
    namespace Pit0Ldval0{    ///<Timer Load Value Register
        using Addr = Register::Address<0x4002d100,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
        namespace TsvValC{
        }
    }
    namespace Pit0Ldval1{    ///<Timer Load Value Register
        using Addr = Register::Address<0x4002d110,0x00000000,0,unsigned>;
        ///Timer Start Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
        namespace TsvValC{
        }
    }
    namespace Pit0Cval0{    ///<Current Timer Value Register
        using Addr = Register::Address<0x4002d104,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
        namespace TvlValC{
        }
    }
    namespace Pit0Cval1{    ///<Current Timer Value Register
        using Addr = Register::Address<0x4002d114,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
        namespace TvlValC{
        }
    }
    namespace Pit0Tctrl0{    ///<Timer Control Register
        using Addr = Register::Address<0x4002d108,0xfffffff8,0,unsigned>;
        ///Timer Enable
        enum class TenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten),TenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ten),TenVal::v1> v1{};
        }
        ///Timer Interrupt Enable
        enum class TieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie),TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie),TieVal::v1> v1{};
        }
        ///Chain Mode
        enum class ChnVal {
            v0=0x00000000,     ///<Timer is not chained.
            v1=0x00000001,     ///<Timer is chained to previous timer. For example, for Channel 2, if this field is set, Timer 2 is chained to Timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ChnVal> chn{}; 
        namespace ChnValC{
            constexpr Register::FieldValue<decltype(chn),ChnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chn),ChnVal::v1> v1{};
        }
    }
    namespace Pit0Tctrl1{    ///<Timer Control Register
        using Addr = Register::Address<0x4002d118,0xfffffff8,0,unsigned>;
        ///Timer Enable
        enum class TenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TenVal> ten{}; 
        namespace TenValC{
            constexpr Register::FieldValue<decltype(ten),TenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ten),TenVal::v1> v1{};
        }
        ///Timer Interrupt Enable
        enum class TieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie),TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie),TieVal::v1> v1{};
        }
        ///Chain Mode
        enum class ChnVal {
            v0=0x00000000,     ///<Timer is not chained.
            v1=0x00000001,     ///<Timer is chained to previous timer. For example, for Channel 2, if this field is set, Timer 2 is chained to Timer 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ChnVal> chn{}; 
        namespace ChnValC{
            constexpr Register::FieldValue<decltype(chn),ChnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(chn),ChnVal::v1> v1{};
        }
    }
    namespace Pit0Tflg0{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002d10c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag
        enum class TifVal {
            v0=0x00000000,     ///<Timeout has not yet occurred.
            v1=0x00000001,     ///<Timeout has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TifVal> tif{}; 
        namespace TifValC{
            constexpr Register::FieldValue<decltype(tif),TifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tif),TifVal::v1> v1{};
        }
    }
    namespace Pit0Tflg1{    ///<Timer Flag Register
        using Addr = Register::Address<0x4002d11c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag
        enum class TifVal {
            v0=0x00000000,     ///<Timeout has not yet occurred.
            v1=0x00000001,     ///<Timeout has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TifVal> tif{}; 
        namespace TifValC{
            constexpr Register::FieldValue<decltype(tif),TifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tif),TifVal::v1> v1{};
        }
    }
}

#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Periodic Interval Timer
    namespace PitMr{    ///<Mode Register
        using Addr = Register::Address<0xfffffe30,0xfcf00000,0,unsigned>;
        ///Periodic Interval Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> piv{}; 
        namespace PivValC{
        }
        ///Period Interval Timer Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> piten{}; 
        namespace PitenValC{
        }
        ///Periodic Interval Timer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pitien{}; 
        namespace PitienValC{
        }
    }
    namespace PitSr{    ///<Status Register
        using Addr = Register::Address<0xfffffe34,0xfffffffe,0,unsigned>;
        ///Periodic Interval Timer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pits{}; 
        namespace PitsValC{
        }
    }
    namespace PitPivr{    ///<Periodic Interval Value Register
        using Addr = Register::Address<0xfffffe38,0x00000000,0,unsigned>;
        ///Current Periodic Interval Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> cpiv{}; 
        namespace CpivValC{
        }
        ///Periodic Interval Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> picnt{}; 
        namespace PicntValC{
        }
    }
    namespace PitPiir{    ///<Periodic Interval Image Register
        using Addr = Register::Address<0xfffffe3c,0x00000000,0,unsigned>;
        ///Current Periodic Interval Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> cpiv{}; 
        namespace CpivValC{
        }
        ///Periodic Interval Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> picnt{}; 
        namespace PicntValC{
        }
    }
}

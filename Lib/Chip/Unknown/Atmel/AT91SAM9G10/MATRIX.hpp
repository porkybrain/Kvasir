#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AHB Bus Matrix
    namespace NonematrixMcfg{    ///<Master Configuration Register
        using Addr = Register::Address<0xffffee00,0xfffffffc,0,unsigned>;
        ///Remap Command Bit for AHB Master 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcb0{}; 
        namespace Rcb0ValC{
        }
        ///Remap Command Bit for AHB Master 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rcb1{}; 
        namespace Rcb1ValC{
        }
    }
    namespace NonematrixScfg0{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee04,0xffe0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Index of Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace NonematrixScfg1{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee08,0xffe0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Index of Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace NonematrixScfg2{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee0c,0xffe0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Index of Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace NonematrixScfg3{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee10,0xffe0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Index of Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace NonematrixScfg4{    ///<Slave Configuration Register
        using Addr = Register::Address<0xffffee14,0xffe0ff00,0,unsigned>;
        ///Maximum Number of Allowed Cycles for a Burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> slotCycle{}; 
        namespace SlotcycleValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> defmstrType{}; 
        namespace DefmstrtypeValC{
        }
        ///Fixed Index of Default Master
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> fixedDefmstr{}; 
        namespace FixeddefmstrValC{
        }
    }
    namespace NonematrixTcr{    ///<MATRIX TCM Configuration Register
        using Addr = Register::Address<0xffffee24,0xffffff00,0,unsigned>;
        ///Size of ITCM enabled memory block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> itcmSize{}; 
        namespace ItcmsizeValC{
        }
        ///Size of DTCM enabled memory block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dtcmSize{}; 
        namespace DtcmsizeValC{
        }
    }
    namespace NoneebiCsa{    ///<EBI Chip Select Assignment Register
        using Addr = Register::Address<0xffffee30,0xfffffec5,0,unsigned>;
        ///EBI Chip Select 1 Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ebiCs1a{}; 
        namespace Ebics1aValC{
        }
        ///EBI Chip Select 3 Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ebiCs3a{}; 
        namespace Ebics3aValC{
        }
        ///EBI Chip Select 4 Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ebiCs4a{}; 
        namespace Ebics4aValC{
        }
        ///EBI Chip Select 5 Assignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ebiCs5a{}; 
        namespace Ebics5aValC{
        }
        ///EBI Data Bus Pull-Up Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ebiDbpuc{}; 
        namespace EbidbpucValC{
        }
    }
    namespace NoneusbPucr{    ///<USB Pad Pull-up Control Register
        using Addr = Register::Address<0xffffee34,0xbfffffff,0,unsigned>;
        ///UDP Pad Pull-up Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> udpPupOn{}; 
        namespace UdppuponValC{
        }
    }
}

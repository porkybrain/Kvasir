#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Timer Counter 0
    namespace Tc0Ccr0{    ///<Channel Control Register (channel = 0)
        using Addr = Register::Address<0xf8008000,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        namespace ClkdisValC{
        }
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
        namespace SwtrgValC{
        }
    }
    namespace Tc0Cmr0{    ///<Channel Mode Register (channel = 0)
        using Addr = Register::Address<0xf8008004,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        namespace LdbstopValC{
        }
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        namespace LdbdisValC{
        }
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        namespace AbetrgValC{
        }
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        namespace CpctrgValC{
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra),LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::edge> edge{};
        }
        ///RB Loading Edge Selection
        enum class LdrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,LdrbVal> ldrb{}; 
        namespace LdrbValC{
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::edge> edge{};
        }
    }
    namespace Tc0Cmr0WaveEq1{    ///<Channel Mode Register (channel = 0)
        using Addr = Register::Address<0xf8008004,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        namespace CpcstopValC{
        }
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        namespace CpcdisValC{
        }
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::edge> edge{};
        }
        ///External Event Selection
        enum class EevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EevtVal> eevt{}; 
        namespace EevtValC{
            constexpr Register::FieldValue<decltype(eevt),EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        namespace EnetrgValC{
        }
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOA
        enum class AcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,AcpcVal> acpc{}; 
        namespace AcpcValC{
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOA
        enum class AeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AeevtVal> aeevt{}; 
        namespace AeevtValC{
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOA
        enum class AswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,AswtrgVal> aswtrg{}; 
        namespace AswtrgValC{
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::toggle> toggle{};
        }
        ///RB Compare Effect on TIOB
        enum class BcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,BcpbVal> bcpb{}; 
        namespace BcpbValC{
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOB
        enum class BcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,BcpcVal> bcpc{}; 
        namespace BcpcValC{
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOB
        enum class BeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,BeevtVal> beevt{}; 
        namespace BeevtValC{
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOB
        enum class BswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,BswtrgVal> bswtrg{}; 
        namespace BswtrgValC{
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc0Rab0{    ///<Register AB (channel = 0)
        using Addr = Register::Address<0xf800800c,0x00000000,0,unsigned>;
        ///Register A or Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rab{}; 
        namespace RabValC{
        }
    }
    namespace Tc0Cv0{    ///<Counter Value (channel = 0)
        using Addr = Register::Address<0xf8008010,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
    }
    namespace Tc0Ra0{    ///<Register A (channel = 0)
        using Addr = Register::Address<0xf8008014,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
    }
    namespace Tc0Rb0{    ///<Register B (channel = 0)
        using Addr = Register::Address<0xf8008018,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
        namespace RbValC{
        }
    }
    namespace Tc0Rc0{    ///<Register C (channel = 0)
        using Addr = Register::Address<0xf800801c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
        namespace RcValC{
        }
    }
    namespace Tc0Sr0{    ///<Status Register (channel = 0)
        using Addr = Register::Address<0xf8008020,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        namespace ClkstaValC{
        }
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        namespace MtioaValC{
        }
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
        namespace MtiobValC{
        }
    }
    namespace Tc0Ier0{    ///<Interrupt Enable Register (channel = 0)
        using Addr = Register::Address<0xf8008024,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Idr0{    ///<Interrupt Disable Register (channel = 0)
        using Addr = Register::Address<0xf8008028,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Imr0{    ///<Interrupt Mask Register (channel = 0)
        using Addr = Register::Address<0xf800802c,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Ccr1{    ///<Channel Control Register (channel = 1)
        using Addr = Register::Address<0xf8008040,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        namespace ClkdisValC{
        }
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
        namespace SwtrgValC{
        }
    }
    namespace Tc0Cmr1{    ///<Channel Mode Register (channel = 1)
        using Addr = Register::Address<0xf8008044,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        namespace LdbstopValC{
        }
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        namespace LdbdisValC{
        }
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        namespace AbetrgValC{
        }
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        namespace CpctrgValC{
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra),LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::edge> edge{};
        }
        ///RB Loading Edge Selection
        enum class LdrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,LdrbVal> ldrb{}; 
        namespace LdrbValC{
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::edge> edge{};
        }
    }
    namespace Tc0Cmr1WaveEq1{    ///<Channel Mode Register (channel = 1)
        using Addr = Register::Address<0xf8008044,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        namespace CpcstopValC{
        }
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        namespace CpcdisValC{
        }
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::edge> edge{};
        }
        ///External Event Selection
        enum class EevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EevtVal> eevt{}; 
        namespace EevtValC{
            constexpr Register::FieldValue<decltype(eevt),EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        namespace EnetrgValC{
        }
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOA
        enum class AcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,AcpcVal> acpc{}; 
        namespace AcpcValC{
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOA
        enum class AeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AeevtVal> aeevt{}; 
        namespace AeevtValC{
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOA
        enum class AswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,AswtrgVal> aswtrg{}; 
        namespace AswtrgValC{
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::toggle> toggle{};
        }
        ///RB Compare Effect on TIOB
        enum class BcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,BcpbVal> bcpb{}; 
        namespace BcpbValC{
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOB
        enum class BcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,BcpcVal> bcpc{}; 
        namespace BcpcValC{
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOB
        enum class BeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,BeevtVal> beevt{}; 
        namespace BeevtValC{
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOB
        enum class BswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,BswtrgVal> bswtrg{}; 
        namespace BswtrgValC{
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc0Rab1{    ///<Register AB (channel = 1)
        using Addr = Register::Address<0xf800804c,0x00000000,0,unsigned>;
        ///Register A or Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rab{}; 
        namespace RabValC{
        }
    }
    namespace Tc0Cv1{    ///<Counter Value (channel = 1)
        using Addr = Register::Address<0xf8008050,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
    }
    namespace Tc0Ra1{    ///<Register A (channel = 1)
        using Addr = Register::Address<0xf8008054,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
    }
    namespace Tc0Rb1{    ///<Register B (channel = 1)
        using Addr = Register::Address<0xf8008058,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
        namespace RbValC{
        }
    }
    namespace Tc0Rc1{    ///<Register C (channel = 1)
        using Addr = Register::Address<0xf800805c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
        namespace RcValC{
        }
    }
    namespace Tc0Sr1{    ///<Status Register (channel = 1)
        using Addr = Register::Address<0xf8008060,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        namespace ClkstaValC{
        }
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        namespace MtioaValC{
        }
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
        namespace MtiobValC{
        }
    }
    namespace Tc0Ier1{    ///<Interrupt Enable Register (channel = 1)
        using Addr = Register::Address<0xf8008064,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Idr1{    ///<Interrupt Disable Register (channel = 1)
        using Addr = Register::Address<0xf8008068,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Imr1{    ///<Interrupt Mask Register (channel = 1)
        using Addr = Register::Address<0xf800806c,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Ccr2{    ///<Channel Control Register (channel = 2)
        using Addr = Register::Address<0xf8008080,0xfffffff8,0,unsigned>;
        ///Counter Clock Enable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Counter Clock Disable Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkdis{}; 
        namespace ClkdisValC{
        }
        ///Software Trigger Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrg{}; 
        namespace SwtrgValC{
        }
    }
    namespace Tc0Cmr2{    ///<Channel Mode Register (channel = 2)
        using Addr = Register::Address<0xf8008084,0xfff03800,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldbstop{}; 
        namespace LdbstopValC{
        }
        ///Counter Clock Disable with RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ldbdis{}; 
        namespace LdbdisValC{
        }
        ///External Trigger Edge Selection
        enum class EtrgedgVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EtrgedgVal> etrgedg{}; 
        namespace EtrgedgValC{
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::none> none{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(etrgedg),EtrgedgVal::edge> edge{};
        }
        ///TIOA or TIOB External Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> abetrg{}; 
        namespace AbetrgValC{
        }
        ///RC Compare Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpctrg{}; 
        namespace CpctrgValC{
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Loading Edge Selection
        enum class LdraVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,LdraVal> ldra{}; 
        namespace LdraValC{
            constexpr Register::FieldValue<decltype(ldra),LdraVal::none> none{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldra),LdraVal::edge> edge{};
        }
        ///RB Loading Edge Selection
        enum class LdrbVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge of TIOA
            falling=0x00000002,     ///<Falling edge of TIOA
            edge=0x00000003,     ///<Each edge of TIOA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,LdrbVal> ldrb{}; 
        namespace LdrbValC{
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::none> none{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::rising> rising{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::falling> falling{};
            constexpr Register::FieldValue<decltype(ldrb),LdrbVal::edge> edge{};
        }
    }
    namespace Tc0Cmr2WaveEq1{    ///<Channel Mode Register (channel = 2)
        using Addr = Register::Address<0xf8008084,0x00000000,0,unsigned>;
        ///Clock Selection
        enum class TcclksVal {
            timerClock1=0x00000000,     ///<Clock selected: TCLK1
            timerClock2=0x00000001,     ///<Clock selected: TCLK2
            timerClock3=0x00000002,     ///<Clock selected: TCLK3
            timerClock4=0x00000003,     ///<Clock selected: TCLK4
            timerClock5=0x00000004,     ///<Clock selected: TCLK5
            xc0=0x00000005,     ///<Clock selected: XC0
            xc1=0x00000006,     ///<Clock selected: XC1
            xc2=0x00000007,     ///<Clock selected: XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TcclksVal> tcclks{}; 
        namespace TcclksValC{
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock1> timerClock1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock2> timerClock2{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock3> timerClock3{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock4> timerClock4{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::timerClock5> timerClock5{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(tcclks),TcclksVal::xc2> xc2{};
        }
        ///Clock Invert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clki{}; 
        namespace ClkiValC{
        }
        ///Burst Signal Selection
        enum class BurstVal {
            none=0x00000000,     ///<The clock is not gated by an external signal.
            xc0=0x00000001,     ///<XC0 is ANDed with the selected clock.
            xc1=0x00000002,     ///<XC1 is ANDed with the selected clock.
            xc2=0x00000003,     ///<XC2 is ANDed with the selected clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst),BurstVal::none> none{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(burst),BurstVal::xc2> xc2{};
        }
        ///Counter Clock Stopped with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpcstop{}; 
        namespace CpcstopValC{
        }
        ///Counter Clock Disable with RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpcdis{}; 
        namespace CpcdisValC{
        }
        ///External Event Edge Selection
        enum class EevtedgVal {
            none=0x00000000,     ///<None
            rising=0x00000001,     ///<Rising edge
            falling=0x00000002,     ///<Falling edge
            edge=0x00000003,     ///<Each edge
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EevtedgVal> eevtedg{}; 
        namespace EevtedgValC{
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::none> none{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::rising> rising{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::falling> falling{};
            constexpr Register::FieldValue<decltype(eevtedg),EevtedgVal::edge> edge{};
        }
        ///External Event Selection
        enum class EevtVal {
            tiob=0x00000000,     ///<TIOB
            xc0=0x00000001,     ///<XC0
            xc1=0x00000002,     ///<XC1
            xc2=0x00000003,     ///<XC2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,EevtVal> eevt{}; 
        namespace EevtValC{
            constexpr Register::FieldValue<decltype(eevt),EevtVal::tiob> tiob{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc0> xc0{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc1> xc1{};
            constexpr Register::FieldValue<decltype(eevt),EevtVal::xc2> xc2{};
        }
        ///External Event Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enetrg{}; 
        namespace EnetrgValC{
        }
        ///Waveform Selection
        enum class WavselVal {
            up=0x00000000,     ///<UP mode without automatic trigger on RC Compare
            updown=0x00000001,     ///<UPDOWN mode without automatic trigger on RC Compare
            upRc=0x00000002,     ///<UP mode with automatic trigger on RC Compare
            updownRc=0x00000003,     ///<UPDOWN mode with automatic trigger on RC Compare
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,WavselVal> wavsel{}; 
        namespace WavselValC{
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::up> up{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updown> updown{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::upRc> upRc{};
            constexpr Register::FieldValue<decltype(wavsel),WavselVal::updownRc> updownRc{};
        }
        ///Waveform Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///RA Compare Effect on TIOA
        enum class AcpaVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,AcpaVal> acpa{}; 
        namespace AcpaValC{
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::none> none{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::set> set{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpa),AcpaVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOA
        enum class AcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,AcpcVal> acpc{}; 
        namespace AcpcValC{
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(acpc),AcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOA
        enum class AeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AeevtVal> aeevt{}; 
        namespace AeevtValC{
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aeevt),AeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOA
        enum class AswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,AswtrgVal> aswtrg{}; 
        namespace AswtrgValC{
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(aswtrg),AswtrgVal::toggle> toggle{};
        }
        ///RB Compare Effect on TIOB
        enum class BcpbVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,BcpbVal> bcpb{}; 
        namespace BcpbValC{
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpb),BcpbVal::toggle> toggle{};
        }
        ///RC Compare Effect on TIOB
        enum class BcpcVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,BcpcVal> bcpc{}; 
        namespace BcpcValC{
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::none> none{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::set> set{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bcpc),BcpcVal::toggle> toggle{};
        }
        ///External Event Effect on TIOB
        enum class BeevtVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,BeevtVal> beevt{}; 
        namespace BeevtValC{
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::none> none{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::set> set{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::clear> clear{};
            constexpr Register::FieldValue<decltype(beevt),BeevtVal::toggle> toggle{};
        }
        ///Software Trigger Effect on TIOB
        enum class BswtrgVal {
            none=0x00000000,     ///<None
            set=0x00000001,     ///<Set
            clear=0x00000002,     ///<Clear
            toggle=0x00000003,     ///<Toggle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,BswtrgVal> bswtrg{}; 
        namespace BswtrgValC{
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::none> none{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::set> set{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::clear> clear{};
            constexpr Register::FieldValue<decltype(bswtrg),BswtrgVal::toggle> toggle{};
        }
    }
    namespace Tc0Rab2{    ///<Register AB (channel = 2)
        using Addr = Register::Address<0xf800808c,0x00000000,0,unsigned>;
        ///Register A or Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rab{}; 
        namespace RabValC{
        }
    }
    namespace Tc0Cv2{    ///<Counter Value (channel = 2)
        using Addr = Register::Address<0xf8008090,0x00000000,0,unsigned>;
        ///Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
    }
    namespace Tc0Ra2{    ///<Register A (channel = 2)
        using Addr = Register::Address<0xf8008094,0x00000000,0,unsigned>;
        ///Register A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
    }
    namespace Tc0Rb2{    ///<Register B (channel = 2)
        using Addr = Register::Address<0xf8008098,0x00000000,0,unsigned>;
        ///Register B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rb{}; 
        namespace RbValC{
        }
    }
    namespace Tc0Rc2{    ///<Register C (channel = 2)
        using Addr = Register::Address<0xf800809c,0x00000000,0,unsigned>;
        ///Register C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rc{}; 
        namespace RcValC{
        }
    }
    namespace Tc0Sr2{    ///<Status Register (channel = 2)
        using Addr = Register::Address<0xf80080a0,0xfff8ff00,0,unsigned>;
        ///Counter Overflow Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
        ///Clock Enabling Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clksta{}; 
        namespace ClkstaValC{
        }
        ///TIOA Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mtioa{}; 
        namespace MtioaValC{
        }
        ///TIOB Mirror
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mtiob{}; 
        namespace MtiobValC{
        }
    }
    namespace Tc0Ier2{    ///<Interrupt Enable Register (channel = 2)
        using Addr = Register::Address<0xf80080a4,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Idr2{    ///<Interrupt Disable Register (channel = 2)
        using Addr = Register::Address<0xf80080a8,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Imr2{    ///<Interrupt Mask Register (channel = 2)
        using Addr = Register::Address<0xf80080ac,0xffffff00,0,unsigned>;
        ///Counter Overflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> covfs{}; 
        namespace CovfsValC{
        }
        ///Load Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lovrs{}; 
        namespace LovrsValC{
        }
        ///RA Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cpas{}; 
        namespace CpasValC{
        }
        ///RB Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpbs{}; 
        namespace CpbsValC{
        }
        ///RC Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cpcs{}; 
        namespace CpcsValC{
        }
        ///RA Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ldras{}; 
        namespace LdrasValC{
        }
        ///RB Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ldrbs{}; 
        namespace LdrbsValC{
        }
        ///External Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> etrgs{}; 
        namespace EtrgsValC{
        }
    }
    namespace Tc0Bcr{    ///<Block Control Register
        using Addr = Register::Address<0xf80080c0,0xfffffffe,0,unsigned>;
        ///Synchro Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sync{}; 
        namespace SyncValC{
        }
    }
    namespace Tc0Bmr{    ///<Block Mode Register
        using Addr = Register::Address<0xf80080c4,0xffffffc0,0,unsigned>;
        ///External Clock Signal 0 Selection
        enum class Tc0xc0sVal {
            tclk0=0x00000000,     ///<Signal connected to XC0: TCLK0
            tioa1=0x00000002,     ///<Signal connected to XC0: TIOA1
            tioa2=0x00000003,     ///<Signal connected to XC0: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Tc0xc0sVal> tc0xc0s{}; 
        namespace Tc0xc0sValC{
            constexpr Register::FieldValue<decltype(tc0xc0s),Tc0xc0sVal::tclk0> tclk0{};
            constexpr Register::FieldValue<decltype(tc0xc0s),Tc0xc0sVal::tioa1> tioa1{};
            constexpr Register::FieldValue<decltype(tc0xc0s),Tc0xc0sVal::tioa2> tioa2{};
        }
        ///External Clock Signal 1 Selection
        enum class Tc1xc1sVal {
            tclk1=0x00000000,     ///<Signal connected to XC1: TCLK1
            tioa0=0x00000002,     ///<Signal connected to XC1: TIOA0
            tioa2=0x00000003,     ///<Signal connected to XC1: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Tc1xc1sVal> tc1xc1s{}; 
        namespace Tc1xc1sValC{
            constexpr Register::FieldValue<decltype(tc1xc1s),Tc1xc1sVal::tclk1> tclk1{};
            constexpr Register::FieldValue<decltype(tc1xc1s),Tc1xc1sVal::tioa0> tioa0{};
            constexpr Register::FieldValue<decltype(tc1xc1s),Tc1xc1sVal::tioa2> tioa2{};
        }
        ///External Clock Signal 2 Selection
        enum class Tc2xc2sVal {
            tclk2=0x00000000,     ///<Signal connected to XC2: TCLK2
            tioa1=0x00000002,     ///<Signal connected to XC2: TIOA1
            tioa2=0x00000003,     ///<Signal connected to XC2: TIOA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Tc2xc2sVal> tc2xc2s{}; 
        namespace Tc2xc2sValC{
            constexpr Register::FieldValue<decltype(tc2xc2s),Tc2xc2sVal::tclk2> tclk2{};
            constexpr Register::FieldValue<decltype(tc2xc2s),Tc2xc2sVal::tioa1> tioa1{};
            constexpr Register::FieldValue<decltype(tc2xc2s),Tc2xc2sVal::tioa2> tioa2{};
        }
    }
}

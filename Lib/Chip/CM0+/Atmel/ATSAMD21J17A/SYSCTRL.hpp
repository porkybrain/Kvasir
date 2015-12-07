#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Control
    namespace SysctrlBod33{    ///<3.3V Brown-Out Detector (BOD33) Control
        using Addr = Register::Address<0x40000834,0xffc00ca1,0,unsigned>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Hysteresis
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hyst{}; 
        namespace HystValC{
        }
        ///BOD33 Action
        enum class ActionVal {
            none=0x00000000,     ///<No action
            reset=0x00000001,     ///<The BOD33 generates a reset
            interrupt=0x00000002,     ///<The BOD33 generates an interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ActionVal> action{}; 
        namespace ActionValC{
            constexpr Register::FieldValue<decltype(action),ActionVal::none> none{};
            constexpr Register::FieldValue<decltype(action),ActionVal::reset> reset{};
            constexpr Register::FieldValue<decltype(action),ActionVal::interrupt> interrupt{};
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        namespace RunstdbyValC{
        }
        ///Operation Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Prescaler Select
        enum class PselVal {
            div2=0x00000000,     ///<Divide clock by 2
            div4=0x00000001,     ///<Divide clock by 4
            div8=0x00000002,     ///<Divide clock by 8
            div16=0x00000003,     ///<Divide clock by 16
            div32=0x00000004,     ///<Divide clock by 32
            div64=0x00000005,     ///<Divide clock by 64
            div128=0x00000006,     ///<Divide clock by 128
            div256=0x00000007,     ///<Divide clock by 256
            div512=0x00000008,     ///<Divide clock by 512
            div1k=0x00000009,     ///<Divide clock by 1024
            div2k=0x0000000a,     ///<Divide clock by 2048
            div4k=0x0000000b,     ///<Divide clock by 4096
            div8k=0x0000000c,     ///<Divide clock by 8192
            div16k=0x0000000d,     ///<Divide clock by 16384
            div32k=0x0000000e,     ///<Divide clock by 32768
            div64k=0x0000000f,     ///<Divide clock by 65536
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel),PselVal::div2> div2{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div4> div4{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div8> div8{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div16> div16{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div32> div32{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div64> div64{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div128> div128{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div256> div256{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div512> div512{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div1k> div1k{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div2k> div2k{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div4k> div4k{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div8k> div8k{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div16k> div16k{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div32k> div32k{};
            constexpr Register::FieldValue<decltype(psel),PselVal::div64k> div64k{};
        }
        ///BOD33 Threshold Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> level{}; 
        namespace LevelValC{
        }
    }
    namespace SysctrlDfllctrl{    ///<DFLL48M Control
        using Addr = Register::Address<0x40000824,0xfffff001,0,unsigned>;
        ///DFLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Operating Mode Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///Stable DFLL Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stable{}; 
        namespace StableValC{
        }
        ///Lose Lock After Wake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> llaw{}; 
        namespace LlawValC{
        }
        ///USB Clock Recovery Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbcrm{}; 
        namespace UsbcrmValC{
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        namespace RunstdbyValC{
        }
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        namespace OndemandValC{
        }
        ///Chill Cycle Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ccdis{}; 
        namespace CcdisValC{
        }
        ///Quick Lock Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> qldis{}; 
        namespace QldisValC{
        }
        ///Bypass Coarse Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bplckc{}; 
        namespace BplckcValC{
        }
        ///Wait Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitlock{}; 
        namespace WaitlockValC{
        }
    }
    namespace SysctrlDfllmul{    ///<DFLL48M Multiplier
        using Addr = Register::Address<0x4000082c,0x00000000,0,unsigned>;
        ///DFLL Multiply Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mul{}; 
        namespace MulValC{
        }
        ///Fine Maximum Step
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fstep{}; 
        namespace FstepValC{
        }
        ///Coarse Maximum Step
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> cstep{}; 
        namespace CstepValC{
        }
    }
    namespace SysctrlDfllsync{    ///<DFLL48M Synchronization
        using Addr = Register::Address<0x40000830,0xffffff7f,0,unsigned char>;
        ///Read Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> readreq{}; 
        namespace ReadreqValC{
        }
    }
    namespace SysctrlDfllval{    ///<DFLL48M Value
        using Addr = Register::Address<0x40000828,0x00000000,0,unsigned>;
        ///Fine Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> fine{}; 
        namespace FineValC{
        }
        ///Coarse Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> coarse{}; 
        namespace CoarseValC{
        }
        ///Multiplication Ratio Difference
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> diff{}; 
        namespace DiffValC{
        }
    }
    namespace SysctrlDpllctrla{    ///<DPLL Control A
        using Addr = Register::Address<0x40000844,0xffffff3d,0,unsigned char>;
        ///DPLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        namespace RunstdbyValC{
        }
        ///On Demand Clock Activation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        namespace OndemandValC{
        }
    }
    namespace SysctrlDpllctrlb{    ///<DPLL Control B
        using Addr = Register::Address<0x4000084c,0xf800e8c0,0,unsigned>;
        ///Proportional Integral Filter Selection
        enum class FilterVal {
            default_=0x00000000,     ///<Default filter mode
            lbfilt=0x00000001,     ///<Low bandwidth filter
            hbfilt=0x00000002,     ///<High bandwidth filter
            hdfilt=0x00000003,     ///<High damping filter
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,FilterVal> filter{}; 
        namespace FilterValC{
            constexpr Register::FieldValue<decltype(filter),FilterVal::default_> default_{};
            constexpr Register::FieldValue<decltype(filter),FilterVal::lbfilt> lbfilt{};
            constexpr Register::FieldValue<decltype(filter),FilterVal::hbfilt> hbfilt{};
            constexpr Register::FieldValue<decltype(filter),FilterVal::hdfilt> hdfilt{};
        }
        ///Low-Power Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lpen{}; 
        namespace LpenValC{
        }
        ///Wake Up Fast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wuf{}; 
        namespace WufValC{
        }
        ///Reference Clock Selection
        enum class RefclkVal {
            ref0=0x00000000,     ///<CLK_DPLL_REF0 clock reference
            ref1=0x00000001,     ///<CLK_DPLL_REF1 clock reference
            gclk=0x00000002,     ///<GCLK_DPLL clock reference
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,RefclkVal> refclk{}; 
        namespace RefclkValC{
            constexpr Register::FieldValue<decltype(refclk),RefclkVal::ref0> ref0{};
            constexpr Register::FieldValue<decltype(refclk),RefclkVal::ref1> ref1{};
            constexpr Register::FieldValue<decltype(refclk),RefclkVal::gclk> gclk{};
        }
        ///Lock Time
        enum class LtimeVal {
            v0x0=0x00000000,     ///<Default	No time-out
            v0x4=0x00000004,     ///<8MS	Time-out if no lock within 8 ms
            v0x5=0x00000005,     ///<9MS	Time-out if no lock within 9 ms
            v0x6=0x00000006,     ///<10MS	Time-out if no lock within 10 ms
            v0x7=0x00000007,     ///<11MS	Time-out if no lock within 11 ms
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,LtimeVal> ltime{}; 
        namespace LtimeValC{
            constexpr Register::FieldValue<decltype(ltime),LtimeVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(ltime),LtimeVal::v0x4> v0x4{};
            constexpr Register::FieldValue<decltype(ltime),LtimeVal::v0x5> v0x5{};
            constexpr Register::FieldValue<decltype(ltime),LtimeVal::v0x6> v0x6{};
            constexpr Register::FieldValue<decltype(ltime),LtimeVal::v0x7> v0x7{};
        }
        ///Lock Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lbypass{}; 
        namespace LbypassValC{
        }
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace SysctrlDpllratio{    ///<DPLL Ratio Control
        using Addr = Register::Address<0x40000848,0xfff0f000,0,unsigned>;
        ///Loop Divider Ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ldr{}; 
        namespace LdrValC{
        }
        ///Loop Divider Ratio Fractional Part
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> ldrfrac{}; 
        namespace LdrfracValC{
        }
    }
    namespace SysctrlDpllstatus{    ///<DPLL Status
        using Addr = Register::Address<0x40000850,0xfffffff0,0,unsigned char>;
        ///DPLL Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///Output Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkrdy{}; 
        namespace ClkrdyValC{
        }
        ///DPLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Divider Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace SysctrlIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40000800,0xfffc7000,0,unsigned>;
        ///XOSC Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy{}; 
        namespace XoscrdyValC{
        }
        ///XOSC32K Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        namespace Xosc32krdyValC{
        }
        ///OSC32K Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32krdy{}; 
        namespace Osc32krdyValC{
        }
        ///OSC8M Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc8mrdy{}; 
        namespace Osc8mrdyValC{
        }
        ///DFLL Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        namespace DfllrdyValC{
        }
        ///DFLL Out Of Bounds Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dflloob{}; 
        namespace DflloobValC{
        }
        ///DFLL Lock Fine Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        namespace DflllckfValC{
        }
        ///DFLL Lock Coarse Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        namespace DflllckcValC{
        }
        ///DFLL Reference Clock Stopped Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        namespace DfllrcsValC{
        }
        ///BOD33 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        namespace Bod33rdyValC{
        }
        ///BOD33 Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bod33det{}; 
        namespace Bod33detValC{
        }
        ///BOD33 Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        namespace B33srdyValC{
        }
        ///DPLL Lock Rise Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dplllckr{}; 
        namespace DplllckrValC{
        }
        ///DPLL Lock Fall Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dplllckf{}; 
        namespace DplllckfValC{
        }
        ///DPLL Lock Timeout Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dplllto{}; 
        namespace DpllltoValC{
        }
    }
    namespace SysctrlIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40000804,0xfffc7000,0,unsigned>;
        ///XOSC Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy{}; 
        namespace XoscrdyValC{
        }
        ///XOSC32K Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        namespace Xosc32krdyValC{
        }
        ///OSC32K Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32krdy{}; 
        namespace Osc32krdyValC{
        }
        ///OSC8M Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc8mrdy{}; 
        namespace Osc8mrdyValC{
        }
        ///DFLL Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        namespace DfllrdyValC{
        }
        ///DFLL Out Of Bounds Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dflloob{}; 
        namespace DflloobValC{
        }
        ///DFLL Lock Fine Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        namespace DflllckfValC{
        }
        ///DFLL Lock Coarse Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        namespace DflllckcValC{
        }
        ///DFLL Reference Clock Stopped Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        namespace DfllrcsValC{
        }
        ///BOD33 Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        namespace Bod33rdyValC{
        }
        ///BOD33 Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bod33det{}; 
        namespace Bod33detValC{
        }
        ///BOD33 Synchronization Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        namespace B33srdyValC{
        }
        ///DPLL Lock Rise Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dplllckr{}; 
        namespace DplllckrValC{
        }
        ///DPLL Lock Fall Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dplllckf{}; 
        namespace DplllckfValC{
        }
        ///DPLL Lock Timeout Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dplllto{}; 
        namespace DpllltoValC{
        }
    }
    namespace SysctrlIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40000808,0xfffc7000,0,unsigned>;
        ///XOSC Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy{}; 
        namespace XoscrdyValC{
        }
        ///XOSC32K Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        namespace Xosc32krdyValC{
        }
        ///OSC32K Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32krdy{}; 
        namespace Osc32krdyValC{
        }
        ///OSC8M Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc8mrdy{}; 
        namespace Osc8mrdyValC{
        }
        ///DFLL Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        namespace DfllrdyValC{
        }
        ///DFLL Out Of Bounds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dflloob{}; 
        namespace DflloobValC{
        }
        ///DFLL Lock Fine
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        namespace DflllckfValC{
        }
        ///DFLL Lock Coarse
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        namespace DflllckcValC{
        }
        ///DFLL Reference Clock Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        namespace DfllrcsValC{
        }
        ///BOD33 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        namespace Bod33rdyValC{
        }
        ///BOD33 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bod33det{}; 
        namespace Bod33detValC{
        }
        ///BOD33 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        namespace B33srdyValC{
        }
        ///DPLL Lock Rise
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dplllckr{}; 
        namespace DplllckrValC{
        }
        ///DPLL Lock Fall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dplllckf{}; 
        namespace DplllckfValC{
        }
        ///DPLL Lock Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dplllto{}; 
        namespace DpllltoValC{
        }
    }
    namespace SysctrlOsculp32k{    ///<32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
        using Addr = Register::Address<0x4000081c,0xffffff60,0,unsigned char>;
        ///Oscillator Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> calib{}; 
        namespace CalibValC{
        }
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
        namespace WrtlockValC{
        }
    }
    namespace SysctrlOsc8m{    ///<8MHz Internal Oscillator (OSC8M) Control
        using Addr = Register::Address<0x40000820,0x3000fc3d,0,unsigned>;
        ///Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        namespace RunstdbyValC{
        }
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        namespace OndemandValC{
        }
        ///Oscillator Prescaler
        enum class PrescVal {
            v0x0=0x00000000,     ///<1
            v0x1=0x00000001,     ///<2
            v0x2=0x00000002,     ///<4
            v0x3=0x00000003,     ///<8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PrescVal> presc{}; 
        namespace PrescValC{
            constexpr Register::FieldValue<decltype(presc),PrescVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(presc),PrescVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(presc),PrescVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(presc),PrescVal::v0x3> v0x3{};
        }
        ///Oscillator Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> calib{}; 
        namespace CalibValC{
        }
        ///Oscillator Frequency Range
        enum class FrangeVal {
            v0x0=0x00000000,     ///<4 to 6MHz
            v0x1=0x00000001,     ///<6 to 8MHz
            v0x2=0x00000002,     ///<8 to 11MHz
            v0x3=0x00000003,     ///<11 to 15MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,FrangeVal> frange{}; 
        namespace FrangeValC{
            constexpr Register::FieldValue<decltype(frange),FrangeVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(frange),FrangeVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(frange),FrangeVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(frange),FrangeVal::v0x3> v0x3{};
        }
    }
    namespace SysctrlOsc32k{    ///<32kHz Internal Oscillator (OSC32K) Control
        using Addr = Register::Address<0x40000818,0xff80e831,0,unsigned>;
        ///Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///32kHz Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en32k{}; 
        namespace En32kValC{
        }
        ///1kHz Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en1k{}; 
        namespace En1kValC{
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        namespace RunstdbyValC{
        }
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        namespace OndemandValC{
        }
        ///Oscillator Start-Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> startup{}; 
        namespace StartupValC{
        }
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrtlock{}; 
        namespace WrtlockValC{
        }
        ///Oscillator Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> calib{}; 
        namespace CalibValC{
        }
    }
    namespace SysctrlPclksr{    ///<Power and Clocks Status
        using Addr = Register::Address<0x4000080c,0xfffc7000,0,unsigned>;
        ///XOSC Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy{}; 
        namespace XoscrdyValC{
        }
        ///XOSC32K Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        namespace Xosc32krdyValC{
        }
        ///OSC32K Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32krdy{}; 
        namespace Osc32krdyValC{
        }
        ///OSC8M Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc8mrdy{}; 
        namespace Osc8mrdyValC{
        }
        ///DFLL Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        namespace DfllrdyValC{
        }
        ///DFLL Out Of Bounds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dflloob{}; 
        namespace DflloobValC{
        }
        ///DFLL Lock Fine
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        namespace DflllckfValC{
        }
        ///DFLL Lock Coarse
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        namespace DflllckcValC{
        }
        ///DFLL Reference Clock Stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        namespace DfllrcsValC{
        }
        ///BOD33 Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        namespace Bod33rdyValC{
        }
        ///BOD33 Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bod33det{}; 
        namespace Bod33detValC{
        }
        ///BOD33 Synchronization Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        namespace B33srdyValC{
        }
        ///DPLL Lock Rise
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dplllckr{}; 
        namespace DplllckrValC{
        }
        ///DPLL Lock Fall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dplllckf{}; 
        namespace DplllckfValC{
        }
        ///DPLL Lock Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dplllto{}; 
        namespace DpllltoValC{
        }
    }
    namespace SysctrlVref{    ///<Voltage References System (VREF) Control
        using Addr = Register::Address<0x40000840,0xf800fff9,0,unsigned>;
        ///Temperature Sensor Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsen{}; 
        namespace TsenValC{
        }
        ///Bandgap Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bgouten{}; 
        namespace BgoutenValC{
        }
        ///Bandgap Voltage Generator Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> calib{}; 
        namespace CalibValC{
        }
    }
    namespace SysctrlXosc{    ///<External Multipurpose Crystal Oscillator (XOSC) Control
        using Addr = Register::Address<0x40000810,0xffff0039,0,unsigned>;
        ///Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Crystal Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xtalen{}; 
        namespace XtalenValC{
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        namespace RunstdbyValC{
        }
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        namespace OndemandValC{
        }
        ///Oscillator Gain
        enum class GainVal {
            v0x0=0x00000000,     ///<2MHz
            v0x1=0x00000001,     ///<4MHz
            v0x2=0x00000002,     ///<8MHz
            v0x3=0x00000003,     ///<16MHz
            v0x4=0x00000004,     ///<30MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,GainVal> gain{}; 
        namespace GainValC{
            constexpr Register::FieldValue<decltype(gain),GainVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(gain),GainVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(gain),GainVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(gain),GainVal::v0x3> v0x3{};
            constexpr Register::FieldValue<decltype(gain),GainVal::v0x4> v0x4{};
        }
        ///Automatic Amplitude Gain Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ampgc{}; 
        namespace AmpgcValC{
        }
        ///Start-Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> startup{}; 
        namespace StartupValC{
        }
    }
    namespace SysctrlXosc32k{    ///<32kHz External Crystal Oscillator (XOSC32K) Control
        using Addr = Register::Address<0x40000814,0xffffe801,0,unsigned>;
        ///Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Crystal Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xtalen{}; 
        namespace XtalenValC{
        }
        ///32kHz Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en32k{}; 
        namespace En32kValC{
        }
        ///1kHz Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> en1k{}; 
        namespace En1kValC{
        }
        ///Automatic Amplitude Control Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aampen{}; 
        namespace AampenValC{
        }
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        namespace RunstdbyValC{
        }
        ///On Demand Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        namespace OndemandValC{
        }
        ///Oscillator Start-Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> startup{}; 
        namespace StartupValC{
        }
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrtlock{}; 
        namespace WrtlockValC{
        }
    }
}

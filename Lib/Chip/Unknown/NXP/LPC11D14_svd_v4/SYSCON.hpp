#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System configuration
    namespace Nonesysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0xfffffffc,0,unsigned>;
        ///System memory remap
        enum class MapVal {
            bootLoaderModeIn=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamModeInter=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashModeInt=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MapVal> map{}; 
        namespace MapValC{
            constexpr Register::FieldValue<decltype(map),MapVal::bootLoaderModeIn> bootLoaderModeIn{};
            constexpr Register::FieldValue<decltype(map),MapVal::userRamModeInter> userRamModeInter{};
            constexpr Register::FieldValue<decltype(map),MapVal::userFlashModeInt> userFlashModeInt{};
        }
    }
    namespace Nonepresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0xfffffff0,0,unsigned>;
        ///SPI0 reset control
        enum class Ssp0rstnVal {
            resetsTheSpi0Peri=0x00000000,     ///<Resets the SPI0 peripheral.
            spi0ResetDeAssert=0x00000001,     ///<SPI0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ssp0rstnVal> ssp0RstN{}; 
        namespace Ssp0rstnValC{
            constexpr Register::FieldValue<decltype(ssp0RstN),Ssp0rstnVal::resetsTheSpi0Peri> resetsTheSpi0Peri{};
            constexpr Register::FieldValue<decltype(ssp0RstN),Ssp0rstnVal::spi0ResetDeAssert> spi0ResetDeAssert{};
        }
        ///I2C reset control
        enum class I2crstnVal {
            resetsTheI2cPerip=0x00000000,     ///<Resets the I2C peripheral.
            i2cResetDeAsserte=0x00000001,     ///<I2C reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,I2crstnVal> i2cRstN{}; 
        namespace I2crstnValC{
            constexpr Register::FieldValue<decltype(i2cRstN),I2crstnVal::resetsTheI2cPerip> resetsTheI2cPerip{};
            constexpr Register::FieldValue<decltype(i2cRstN),I2crstnVal::i2cResetDeAsserte> i2cResetDeAsserte{};
        }
        ///SPI1 reset control
        enum class Ssp1rstnVal {
            resetsTheSpi1Peri=0x00000000,     ///<Resets the SPI1 peripheral.
            spi1ResetDeAssert=0x00000001,     ///<SPI1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ssp1rstnVal> ssp1RstN{}; 
        namespace Ssp1rstnValC{
            constexpr Register::FieldValue<decltype(ssp1RstN),Ssp1rstnVal::resetsTheSpi1Peri> resetsTheSpi1Peri{};
            constexpr Register::FieldValue<decltype(ssp1RstN),Ssp1rstnVal::spi1ResetDeAssert> spi1ResetDeAssert{};
        }
        ///C_CAN reset control. See Section 3.1 for part specific details.
        enum class CanrstnVal {
            resetsTheCCanPer=0x00000000,     ///<Resets the C_CAN peripheral.
            cCanResetDeAsser=0x00000001,     ///<C_CAN reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CanrstnVal> canRstN{}; 
        namespace CanrstnValC{
            constexpr Register::FieldValue<decltype(canRstN),CanrstnVal::resetsTheCCanPer> resetsTheCCanPer{};
            constexpr Register::FieldValue<decltype(canRstN),CanrstnVal::cCanResetDeAsser> cCanResetDeAsser{};
        }
    }
    namespace Nonesyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0xffffff80,0,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        namespace MselValC{
        }
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class PselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel),PselVal::pEq1> pEq1{};
            constexpr Register::FieldValue<decltype(psel),PselVal::pEq2> pEq2{};
            constexpr Register::FieldValue<decltype(psel),PselVal::pEq4> pEq4{};
            constexpr Register::FieldValue<decltype(psel),PselVal::pEq8> pEq8{};
        }
    }
    namespace Nonesyspllstat{    ///<System PLL status
        using Addr = Register::Address<0x4004800c,0xfffffffe,0,unsigned>;
        ///PLL lock status
        enum class LockVal {
            pllNotLocked=0x00000000,     ///<PLL not locked
            pllLocked=0x00000001,     ///<PLL locked
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LockVal> lock{}; 
        namespace LockValC{
            constexpr Register::FieldValue<decltype(lock),LockVal::pllNotLocked> pllNotLocked{};
            constexpr Register::FieldValue<decltype(lock),LockVal::pllLocked> pllLocked{};
        }
    }
    namespace Nonesysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0xfffffffc,0,unsigned>;
        ///Bypass system oscillator
        enum class BypassVal {
            oscillatorIsNotBy=0x00000000,     ///<Oscillator is not bypassed.
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN and XTALOUT pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass),BypassVal::oscillatorIsNotBy> oscillatorIsNotBy{};
            constexpr Register::FieldValue<decltype(bypass),BypassVal::bypassEnabledPll> bypassEnabledPll{};
        }
        ///Determines frequency range for Low-power oscillator.
        enum class FreqrangeVal {
            v120MhzFrequency=0x00000000,     ///<1 - 20 MHz frequency range.
            v1525MhzFrequenc=0x00000001,     ///<15 - 25 MHz frequency range
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FreqrangeVal> freqrange{}; 
        namespace FreqrangeValC{
            constexpr Register::FieldValue<decltype(freqrange),FreqrangeVal::v120MhzFrequency> v120MhzFrequency{};
            constexpr Register::FieldValue<decltype(freqrange),FreqrangeVal::v1525MhzFrequenc> v1525MhzFrequenc{};
        }
    }
    namespace Nonewdtoscctrl{    ///<Watchdog oscillator control
        using Addr = Register::Address<0x40048024,0xfffffe00,0,unsigned>;
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        namespace DivselValC{
        }
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class FreqselVal {
            v05Mhz=0x00000001,     ///<0.5 MHz
            v08Mhz=0x00000002,     ///<0.8 MHz
            v11Mhz=0x00000003,     ///<1.1 MHz
            v14Mhz=0x00000004,     ///<1.4 MHz
            v16Mhz=0x00000005,     ///<1.6 MHz
            v18Mhz=0x00000006,     ///<1.8 MHz
            v20Mhz=0x00000007,     ///<2.0 MHz
            v22Mhz=0x00000008,     ///<2.2 MHz
            v24Mhz=0x00000009,     ///<2.4 MHz
            v26Mhz=0x0000000a,     ///<2.6 MHz
            v27Mhz=0x0000000b,     ///<2.7 MHz
            v29Mhz=0x0000000c,     ///<2.9 MHz
            v31Mhz=0x0000000d,     ///<3.1 MHz
            v32Mhz=0x0000000e,     ///<3.2 MHz
            v34Mhz=0x0000000f,     ///<3.4 MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,FreqselVal> freqsel{}; 
        namespace FreqselValC{
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v05Mhz> v05Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v08Mhz> v08Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v11Mhz> v11Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v14Mhz> v14Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v16Mhz> v16Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v18Mhz> v18Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v20Mhz> v20Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v22Mhz> v22Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v24Mhz> v24Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v26Mhz> v26Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v27Mhz> v27Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v29Mhz> v29Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v31Mhz> v31Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v32Mhz> v32Mhz{};
            constexpr Register::FieldValue<decltype(freqsel),FreqselVal::v34Mhz> v34Mhz{};
        }
    }
    namespace Noneircctrl{    ///<IRC control
        using Addr = Register::Address<0x40048028,0xffffff00,0,unsigned>;
        ///Trim value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trim{}; 
        namespace TrimValC{
        }
    }
    namespace Nonesysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0xffffffe0,0,unsigned>;
        ///POR reset status
        enum class PorVal {
            noPorDetected=0x00000000,     ///<No POR detected.
            porDetected=0x00000001,     ///<POR detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por),PorVal::noPorDetected> noPorDetected{};
            constexpr Register::FieldValue<decltype(por),PorVal::porDetected> porDetected{};
        }
        ///External RESET status
        enum class ExtrstVal {
            noResetEventDetec=0x00000000,     ///<No RESET event detected.
            resetDetected=0x00000001,     ///<RESET detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtrstVal> extrst{}; 
        namespace ExtrstValC{
            constexpr Register::FieldValue<decltype(extrst),ExtrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr Register::FieldValue<decltype(extrst),ExtrstVal::resetDetected> resetDetected{};
        }
        ///Status of the Watchdog reset
        enum class WdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected.
            wdtResetDetected=0x00000001,     ///<WDT reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt),WdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr Register::FieldValue<decltype(wdt),WdtVal::wdtResetDetected> wdtResetDetected{};
        }
        ///Status of the Brown-out detect reset
        enum class BodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected.
            bodResetDetected=0x00000001,     ///<BOD reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodVal> bod{}; 
        namespace BodValC{
            constexpr Register::FieldValue<decltype(bod),BodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr Register::FieldValue<decltype(bod),BodVal::bodResetDetected> bodResetDetected{};
        }
        ///Status of the software system reset
        enum class SysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected.
            systemResetDetecte=0x00000001,     ///<System reset detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SysrstVal> sysrst{}; 
        namespace SysrstValC{
            constexpr Register::FieldValue<decltype(sysrst),SysrstVal::noSystemResetDete> noSystemResetDete{};
            constexpr Register::FieldValue<decltype(sysrst),SysrstVal::systemResetDetecte> systemResetDetecte{};
        }
    }
    namespace Nonesyspllclksel{    ///<System PLL clock source select
        using Addr = Register::Address<0x40048040,0xfffffffc,0,unsigned>;
        ///System PLL clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            systemOscillator=0x00000001,     ///<System oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::systemOscillator> systemOscillator{};
        }
    }
    namespace Nonesyspllclkuen{    ///<System PLL clock source update enable
        using Addr = Register::Address<0x40048044,0xfffffffe,0,unsigned>;
        ///Enable system PLL clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena),EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena),EnaVal::updateClockSource> updateClockSource{};
        }
    }
    namespace Nonemainclksel{    ///<Main clock source select
        using Addr = Register::Address<0x40048070,0xfffffffc,0,unsigned>;
        ///Clock source for main clock
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            inputClockToSyste=0x00000001,     ///<Input clock to system PLL
            wdtOscillator=0x00000002,     ///<WDT oscillator
            systemPllClockOut=0x00000003,     ///<System PLL clock out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::inputClockToSyste> inputClockToSyste{};
            constexpr Register::FieldValue<decltype(sel),SelVal::wdtOscillator> wdtOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::systemPllClockOut> systemPllClockOut{};
        }
    }
    namespace Nonemainclkuen{    ///<Main clock source update enable
        using Addr = Register::Address<0x40048074,0xfffffffe,0,unsigned>;
        ///Enable main clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena),EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena),EnaVal::updateClockSource> updateClockSource{};
        }
    }
    namespace Nonesysahbclkdiv{    ///<System AHB clock divider
        using Addr = Register::Address<0x40048078,0xffffff00,0,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonesysahbclkctrl{    ///<System AHB clock control
        using Addr = Register::Address<0x40048080,0xfff84000,0,unsigned>;
        ///Enables clock for AHB to APB bridge, to the AHB matrix, to the Cortex-M0 FCLK and HCLK, to the SysCon, and to the PMU. This bit is read only.
        enum class SysVal {
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SysVal> sys{}; 
        namespace SysValC{
            constexpr Register::FieldValue<decltype(sys),SysVal::enable> enable{};
        }
        ///Enables clock for ROM.
        enum class RomVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RomVal> rom{}; 
        namespace RomValC{
            constexpr Register::FieldValue<decltype(rom),RomVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rom),RomVal::enable> enable{};
        }
        ///Enables clock for RAM.
        enum class RamVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RamVal> ram{}; 
        namespace RamValC{
            constexpr Register::FieldValue<decltype(ram),RamVal::disable> disable{};
            constexpr Register::FieldValue<decltype(ram),RamVal::enable> enable{};
        }
        ///Enables clock for flash register interface.
        enum class FlashregVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FlashregVal> flashreg{}; 
        namespace FlashregValC{
            constexpr Register::FieldValue<decltype(flashreg),FlashregVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flashreg),FlashregVal::enabled> enabled{};
        }
        ///Enables clock for flash array access.
        enum class FlasharrayVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FlasharrayVal> flasharray{}; 
        namespace FlasharrayValC{
            constexpr Register::FieldValue<decltype(flasharray),FlasharrayVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flasharray),FlasharrayVal::enabled> enabled{};
        }
        ///Enables clock for I2C.
        enum class I2cVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cVal> i2c{}; 
        namespace I2cValC{
            constexpr Register::FieldValue<decltype(i2c),I2cVal::disable> disable{};
            constexpr Register::FieldValue<decltype(i2c),I2cVal::enable> enable{};
        }
        ///Enables clock for GPIO.
        enum class GpioVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GpioVal> gpio{}; 
        namespace GpioValC{
            constexpr Register::FieldValue<decltype(gpio),GpioVal::disable> disable{};
            constexpr Register::FieldValue<decltype(gpio),GpioVal::enable> enable{};
        }
        ///Enables clock for 16-bit counter/timer 0.
        enum class Ct16b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ct16b0Val> ct16b0{}; 
        namespace Ct16b0ValC{
            constexpr Register::FieldValue<decltype(ct16b0),Ct16b0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct16b0),Ct16b0Val::enable> enable{};
        }
        ///Enables clock for 16-bit counter/timer 1.
        enum class Ct16b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ct16b1Val> ct16b1{}; 
        namespace Ct16b1ValC{
            constexpr Register::FieldValue<decltype(ct16b1),Ct16b1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct16b1),Ct16b1Val::enable> enable{};
        }
        ///Enables clock for 32-bit counter/timer 0.
        enum class Ct32b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ct32b0Val> ct32b0{}; 
        namespace Ct32b0ValC{
            constexpr Register::FieldValue<decltype(ct32b0),Ct32b0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct32b0),Ct32b0Val::enable> enable{};
        }
        ///Enables clock for 32-bit counter/timer 1.
        enum class Ct32b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ct32b1Val> ct32b1{}; 
        namespace Ct32b1ValC{
            constexpr Register::FieldValue<decltype(ct32b1),Ct32b1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct32b1),Ct32b1Val::enable> enable{};
        }
        ///Enables clock for SPI0.
        enum class Ssp0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ssp0Val> ssp0{}; 
        namespace Ssp0ValC{
            constexpr Register::FieldValue<decltype(ssp0),Ssp0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp0),Ssp0Val::enable> enable{};
        }
        ///Enables clock for UART. See Section 3.1 for part specific details.
        enum class UartVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UartVal> uart{}; 
        namespace UartValC{
            constexpr Register::FieldValue<decltype(uart),UartVal::disable> disable{};
            constexpr Register::FieldValue<decltype(uart),UartVal::enable> enable{};
        }
        ///Enables clock for ADC.
        enum class AdcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc),AdcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(adc),AdcVal::enable> enable{};
        }
        ///Enables clock for WDT.
        enum class WdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt),WdtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wdt),WdtVal::enable> enable{};
        }
        ///Enables clock for I/O configuration block.
        enum class IoconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IoconVal> iocon{}; 
        namespace IoconValC{
            constexpr Register::FieldValue<decltype(iocon),IoconVal::disable> disable{};
            constexpr Register::FieldValue<decltype(iocon),IoconVal::enable> enable{};
        }
        ///Enables clock for C_CAN. See Section 3.1 for part specific details.
        enum class CanVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CanVal> can{}; 
        namespace CanValC{
            constexpr Register::FieldValue<decltype(can),CanVal::disable> disable{};
            constexpr Register::FieldValue<decltype(can),CanVal::enable> enable{};
        }
        ///Enables clock for SPI1.
        enum class Ssp1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ssp1Val> ssp1{}; 
        namespace Ssp1ValC{
            constexpr Register::FieldValue<decltype(ssp1),Ssp1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp1),Ssp1Val::enable> enable{};
        }
    }
    namespace Nonessp0clkdiv{    ///<SPI0 clock divider
        using Addr = Register::Address<0x40048094,0xffffff00,0,unsigned>;
        ///SPI0_PCLK clock divider values 0: Disable SPI0_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Noneuartclkdiv{    ///<UART clock divder
        using Addr = Register::Address<0x40048098,0xffffff00,0,unsigned>;
        ///UART_PCLK clock divider values 0: Disable UART_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonessp1clkdiv{    ///<SPI1 clock divder
        using Addr = Register::Address<0x4004809c,0xffffff00,0,unsigned>;
        ///SPI1_PCLK clock divider values 0: Disable SPI1_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonewdtclksel{    ///<WDT clock source select
        using Addr = Register::Address<0x400480d0,0xfffffffc,0,unsigned>;
        ///WDT clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            mainClock=0x00000001,     ///<Main clock
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::mainClock> mainClock{};
            constexpr Register::FieldValue<decltype(sel),SelVal::watchdogOscillator> watchdogOscillator{};
        }
    }
    namespace Nonewdtclkuen{    ///<WDT clock source update enable
        using Addr = Register::Address<0x400480d4,0xfffffffe,0,unsigned>;
        ///Enable WDT clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena),EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena),EnaVal::updateClockSource> updateClockSource{};
        }
    }
    namespace Nonewdtclkdiv{    ///<WDT clock divider
        using Addr = Register::Address<0x400480d8,0xffffff00,0,unsigned>;
        ///WDT clock divider values 0: Disable WDCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Noneclkoutclksel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0xfffffffc,0,unsigned>;
        ///CLKOUT clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            systemOscillator=0x00000001,     ///<System oscillator
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            mainClock=0x00000003,     ///<Main clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::systemOscillator> systemOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::watchdogOscillator> watchdogOscillator{};
            constexpr Register::FieldValue<decltype(sel),SelVal::mainClock> mainClock{};
        }
    }
    namespace Noneclkoutuen{    ///<CLKOUT clock source update enable
        using Addr = Register::Address<0x400480e4,0xfffffffe,0,unsigned>;
        ///Enable CLKOUT clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena),EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena),EnaVal::updateClockSource> updateClockSource{};
        }
    }
    namespace Noneclkoutclkdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0xffffff00,0,unsigned>;
        ///Clock output divider values 0: Disable CLKOUT.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonepioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0x00000000,0,unsigned>;
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cappio00{}; 
        namespace Cappio00ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cappio01{}; 
        namespace Cappio01ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cappio02{}; 
        namespace Cappio02ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cappio03{}; 
        namespace Cappio03ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cappio04{}; 
        namespace Cappio04ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cappio05{}; 
        namespace Cappio05ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cappio06{}; 
        namespace Cappio06ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cappio07{}; 
        namespace Cappio07ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cappio08{}; 
        namespace Cappio08ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cappio09{}; 
        namespace Cappio09ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cappio010{}; 
        namespace Cappio010ValC{
        }
        ///Raw reset status input PIO0_n: PIO0_11 to PIO0_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cappio011{}; 
        namespace Cappio011ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cappio10{}; 
        namespace Cappio10ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cappio11{}; 
        namespace Cappio11ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cappio12{}; 
        namespace Cappio12ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cappio13{}; 
        namespace Cappio13ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cappio14{}; 
        namespace Cappio14ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cappio15{}; 
        namespace Cappio15ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cappio16{}; 
        namespace Cappio16ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cappio17{}; 
        namespace Cappio17ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cappio18{}; 
        namespace Cappio18ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cappio19{}; 
        namespace Cappio19ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cappio110{}; 
        namespace Cappio110ValC{
        }
        ///Raw reset status input PIO1_n: PIO1_11 to PIO1_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cappio111{}; 
        namespace Cappio111ValC{
        }
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cappio29{}; 
        namespace Cappio29ValC{
        }
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cappio21{}; 
        namespace Cappio21ValC{
        }
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cappio22{}; 
        namespace Cappio22ValC{
        }
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cappio23{}; 
        namespace Cappio23ValC{
        }
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cappio24{}; 
        namespace Cappio24ValC{
        }
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cappio25{}; 
        namespace Cappio25ValC{
        }
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cappio26{}; 
        namespace Cappio26ValC{
        }
        ///Raw reset status input PIO2_n: PIO2_7 to PIO2_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cappio27{}; 
        namespace Cappio27ValC{
        }
    }
    namespace Nonepioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0xfffffc00,0,unsigned>;
        ///Raw reset status input PIO2_8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cappio28{}; 
        namespace Cappio28ValC{
        }
        ///Raw reset status input PIO2_9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cappio29{}; 
        namespace Cappio29ValC{
        }
        ///Raw reset status input PIO2_10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cappio210{}; 
        namespace Cappio210ValC{
        }
        ///Raw reset status input PIO2_11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cappio211{}; 
        namespace Cappio211ValC{
        }
        ///Raw reset status input PIO3_0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cappio30{}; 
        namespace Cappio30ValC{
        }
        ///Raw reset status input PIO3_1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cappio31{}; 
        namespace Cappio31ValC{
        }
        ///Raw reset status input PIO3_2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cappio32{}; 
        namespace Cappio32ValC{
        }
        ///Raw reset status input PIO3_3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cappio33{}; 
        namespace Cappio33ValC{
        }
        ///Raw reset status input PIO3_4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cappio34{}; 
        namespace Cappio34ValC{
        }
        ///Raw reset status input PIO3_5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cappio35{}; 
        namespace Cappio35ValC{
        }
    }
    namespace Nonebodctrl{    ///<BOD control
        using Addr = Register::Address<0x40048150,0xffffffe0,0,unsigned>;
        ///BOD reset level
        enum class BodrstlevVal {
            level0TheResetA=0x00000000,     ///<Level 0: The reset assertion threshold voltage is 1.46 V; the reset de-assertion threshold voltage is 1.63 V.
            level1TheResetA=0x00000001,     ///<Level 1: The reset assertion threshold voltage is 2.06 V; the reset de-assertion threshold voltage is 2.15 V.
            level2TheResetA=0x00000002,     ///<Level 2: The reset assertion threshold voltage is 2.35 V; the reset de-assertion threshold voltage is 2.43 V.
            level3TheResetA=0x00000003,     ///<Level 3: The reset assertion threshold voltage is 2.63 V; the reset de-assertion threshold voltage is 2.71 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BodrstlevVal> bodrstlev{}; 
        namespace BodrstlevValC{
            constexpr Register::FieldValue<decltype(bodrstlev),BodrstlevVal::level0TheResetA> level0TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev),BodrstlevVal::level1TheResetA> level1TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev),BodrstlevVal::level2TheResetA> level2TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev),BodrstlevVal::level3TheResetA> level3TheResetA{};
        }
        ///BOD interrupt level
        enum class BodintvalVal {
            level0TheInterru=0x00000000,     ///<Level 0: The interrupt assertion threshold voltage is 1.65 V; the interrupt de-assertion threshold voltage is 1.80 V.
            level1theInterrup=0x00000001,     ///<Level 1:The interrupt assertion threshold voltage is 2.22 V; the interrupt de-assertion threshold voltage is 2.35 V.
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is 2.52 V; the interrupt de-assertion threshold voltage is 2.66 V.
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is 2.80 V; the interrupt de-assertion threshold voltage is 2.90 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval),BodintvalVal::level0TheInterru> level0TheInterru{};
            constexpr Register::FieldValue<decltype(bodintval),BodintvalVal::level1theInterrup> level1theInterrup{};
            constexpr Register::FieldValue<decltype(bodintval),BodintvalVal::level2TheInterru> level2TheInterru{};
            constexpr Register::FieldValue<decltype(bodintval),BodintvalVal::level3TheInterru> level3TheInterru{};
        }
        ///BOD reset enable
        enum class BodrstenaVal {
            disableResetFuncti=0x00000000,     ///<Disable reset function.
            enableResetFunctio=0x00000001,     ///<Enable reset function.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BodrstenaVal> bodrstena{}; 
        namespace BodrstenaValC{
            constexpr Register::FieldValue<decltype(bodrstena),BodrstenaVal::disableResetFuncti> disableResetFuncti{};
            constexpr Register::FieldValue<decltype(bodrstena),BodrstenaVal::enableResetFunctio> enableResetFunctio{};
        }
    }
    namespace Nonesystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40048154,0xfc000000,0,unsigned>;
        ///System tick timer calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
        namespace CalValC{
        }
    }
    namespace Nonestartaprp0{    ///<Start logic edge control register 0
        using Addr = Register::Address<0x40048200,0xffffe000,0,unsigned>;
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aprpio00{}; 
        namespace Aprpio00ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aprpio01{}; 
        namespace Aprpio01ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aprpio02{}; 
        namespace Aprpio02ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> aprpio03{}; 
        namespace Aprpio03ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> aprpio04{}; 
        namespace Aprpio04ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aprpio05{}; 
        namespace Aprpio05ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> aprpio06{}; 
        namespace Aprpio06ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> aprpio07{}; 
        namespace Aprpio07ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> aprpio08{}; 
        namespace Aprpio08ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aprpio09{}; 
        namespace Aprpio09ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> aprpio010{}; 
        namespace Aprpio010ValC{
        }
        ///Edge select for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> aprpio011{}; 
        namespace Aprpio011ValC{
        }
        ///Edge select for start logic input PIO1_0 0 = Falling edge 1 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> aprpio10{}; 
        namespace Aprpio10ValC{
        }
    }
    namespace Nonestarterp0{    ///<Start logic signal enable register 0
        using Addr = Register::Address<0x40048204,0xffffe000,0,unsigned>;
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> erpio00{}; 
        namespace Erpio00ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erpio01{}; 
        namespace Erpio01ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erpio02{}; 
        namespace Erpio02ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> erpio03{}; 
        namespace Erpio03ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> erpio04{}; 
        namespace Erpio04ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> erpio05{}; 
        namespace Erpio05ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> erpio06{}; 
        namespace Erpio06ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> erpio07{}; 
        namespace Erpio07ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> erpio08{}; 
        namespace Erpio08ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erpio09{}; 
        namespace Erpio09ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> erpio010{}; 
        namespace Erpio010ValC{
        }
        ///Enable start signal for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> erpio011{}; 
        namespace Erpio011ValC{
        }
        ///Enable start signal for start logic input PIO1_0 0 = Disabled 1 = Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> erpio10{}; 
        namespace Erpio10ValC{
        }
    }
    namespace Nonestartrsrp0clr{    ///<Start logic reset register 0
        using Addr = Register::Address<0x40048208,0xffffe000,0,unsigned>;
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rsrpio00{}; 
        namespace Rsrpio00ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsrpio01{}; 
        namespace Rsrpio01ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsrpio02{}; 
        namespace Rsrpio02ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsrpio03{}; 
        namespace Rsrpio03ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rsrpio04{}; 
        namespace Rsrpio04ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsrpio05{}; 
        namespace Rsrpio05ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rsrpio06{}; 
        namespace Rsrpio06ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rsrpio07{}; 
        namespace Rsrpio07ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rsrpio08{}; 
        namespace Rsrpio08ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rsrpio09{}; 
        namespace Rsrpio09ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rsrpio010{}; 
        namespace Rsrpio010ValC{
        }
        ///Start signal reset for start logic input PIO0_n:PIO0_11 to PIO0_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rsrpio011{}; 
        namespace Rsrpio011ValC{
        }
        ///Start signal reset for start logic input PIO1_0 0 = Do nothing. 1 = Writing 1 resets the start signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rsrpio10{}; 
        namespace Rsrpio10ValC{
        }
    }
    namespace Nonestartsrp0{    ///<Start logic status register 0
        using Addr = Register::Address<0x4004820c,0xffffe000,0,unsigned>;
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srpio00{}; 
        namespace Srpio00ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srpio01{}; 
        namespace Srpio01ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> srpio02{}; 
        namespace Srpio02ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srpio03{}; 
        namespace Srpio03ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> srpio04{}; 
        namespace Srpio04ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> srpio05{}; 
        namespace Srpio05ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srpio06{}; 
        namespace Srpio06ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srpio07{}; 
        namespace Srpio07ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srpio08{}; 
        namespace Srpio08ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srpio09{}; 
        namespace Srpio09ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> srpio010{}; 
        namespace Srpio010ValC{
        }
        ///Start signal status for start logic input PIO0_n: PIO0_11 to PIO0_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> srpio011{}; 
        namespace Srpio011ValC{
        }
        ///Start signal status for start logic input PIO1_0 0 = No start signal received. 1 = Start signal pending.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> srpio10{}; 
        namespace Srpio10ValC{
        }
    }
    namespace Nonepdsleepcfg{    ///<Power-down states in Deep-sleep mode
        using Addr = Register::Address<0x40048230,0xffffe000,0,unsigned>;
        ///Reserved. Always write these bits as 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> notused0{}; 
        namespace Notused0ValC{
        }
        ///BOD power-down control in Deep-sleep mode, see Table 39.
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd),BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd),BodpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write these bits as 11.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> notused1{}; 
        namespace Notused1ValC{
        }
        ///Watchdog oscillator power control in Deep-sleep mode, see Table 39.
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd),WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd),WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notused2{}; 
        namespace Notused2ValC{
        }
        ///Reserved. Always write these bits as 000.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> notused3{}; 
        namespace Notused3ValC{
        }
        ///Reserved. Always write these bits as 11.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> notused4{}; 
        namespace Notused4ValC{
        }
    }
    namespace Nonepdawakecfg{    ///<Power-down states after wake-up from Deep-sleep mode
        using Addr = Register::Address<0x40048234,0xffffff00,0,unsigned>;
        ///IRC oscillator output wake-up configuration
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd),IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd),IrcoutpdVal::poweredDown> poweredDown{};
        }
        ///IRC oscillator power-down wake-up configuration
        enum class IrcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd),IrcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircPd),IrcpdVal::poweredDown> poweredDown{};
        }
        ///Flash wake-up configuration
        enum class FlashpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd),FlashpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flashPd),FlashpdVal::poweredDown> poweredDown{};
        }
        ///BOD wake-up configuration
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd),BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd),BodpdVal::poweredDown> poweredDown{};
        }
        ///ADC wake-up configuration
        enum class AdcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdcpdVal> adcPd{}; 
        namespace AdcpdValC{
            constexpr Register::FieldValue<decltype(adcPd),AdcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adcPd),AdcpdVal::poweredDown> poweredDown{};
        }
        ///System oscillator wake-up configuration
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd),SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd),SysoscpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator wake-up configuration
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd),WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd),WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///System PLL wake-up configuration
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd),SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd),SyspllpdVal::poweredDown> poweredDown{};
        }
    }
    namespace Nonepdruncfg{    ///<Power-down configuration register
        using Addr = Register::Address<0x40048238,0xffffff00,0,unsigned>;
        ///IRC oscillator output power-down
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd),IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd),IrcoutpdVal::poweredDown> poweredDown{};
        }
        ///IRC oscillator power-down
        enum class IrcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd),IrcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircPd),IrcpdVal::poweredDown> poweredDown{};
        }
        ///Flash power-down
        enum class FlashpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd),FlashpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flashPd),FlashpdVal::poweredDown> poweredDown{};
        }
        ///BOD power-down
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd),BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd),BodpdVal::poweredDown> poweredDown{};
        }
        ///ADC power-down
        enum class AdcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdcpdVal> adcPd{}; 
        namespace AdcpdValC{
            constexpr Register::FieldValue<decltype(adcPd),AdcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adcPd),AdcpdVal::poweredDown> poweredDown{};
        }
        ///System oscillator power-down
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd),SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd),SysoscpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator power-down
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd),WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd),WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///System PLL power-down
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd),SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd),SyspllpdVal::poweredDown> poweredDown{};
        }
    }
    namespace NonedeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0,unsigned>;
        ///Part ID numbers for LPC11D14
					0x2540 102B = LPC11D14FBD100/302 
					
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
        namespace DeviceidValC{
        }
    }
}

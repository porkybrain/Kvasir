#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortdPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c000,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c004,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c008,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c00c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c010,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c014,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c018,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c01c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c020,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c024,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c028,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c02c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c030,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c034,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c038,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c03c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c040,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c044,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c048,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c04c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c050,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c054,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c058,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c05c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c060,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c064,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c068,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c06c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c070,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c074,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c078,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004c07c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe),PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Passive Filter Enable
        enum class PfeVal {
            v0=0x00000000,     ///<Passive input filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive input filter is enabled on the corresponding pin, if the pin is configured as a digital input. Refer to the device data sheet for filter characteristics.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PfeVal> pfe{}; 
        namespace PfeValC{
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfe),PfeVal::v1> v1{};
        }
        ///Open Drain Enable
        enum class OdeVal {
            v0=0x00000000,     ///<Open drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open drain output is enabled on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OdeVal> ode{}; 
        namespace OdeValC{
            constexpr Register::FieldValue<decltype(ode),OdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ode),OdeVal::v1> v1{};
        }
        ///Drive Strength Enable
        enum class DseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DseVal> dse{}; 
        namespace DseValC{
            constexpr Register::FieldValue<decltype(dse),DseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dse),DseVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux),MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux),MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk),LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk),LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc),IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf),IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf),IsfVal::v1> v1{};
        }
    }
    namespace PortdGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004c080,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        namespace GpwdValC{
        }
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
        namespace GpweValC{
        }
    }
    namespace PortdGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004c084,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        namespace GpwdValC{
        }
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
        namespace GpweValC{
        }
    }
    namespace PortdIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004c0a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
        namespace IsfValC{
        }
    }
    namespace PortdDfer{    ///<Digital Filter Enable Register
        using Addr = Register::Address<0x4004c0c0,0x00000000,0,unsigned>;
        ///Digital Filter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dfe{}; 
        namespace DfeValC{
        }
    }
    namespace PortdDfcr{    ///<Digital Filter Clock Register
        using Addr = Register::Address<0x4004c0c4,0xfffffffe,0,unsigned>;
        ///Clock Source
        enum class CsVal {
            v0=0x00000000,     ///<Digital filters are clocked by the bus clock.
            v1=0x00000001,     ///<Digital filters are clocked by the 1 kHz LPO clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs),CsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cs),CsVal::v1> v1{};
        }
    }
    namespace PortdDfwr{    ///<Digital Filter Width Register
        using Addr = Register::Address<0x4004c0c8,0xffffffe0,0,unsigned>;
        ///Filter Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> filt{}; 
        namespace FiltValC{
        }
    }
}

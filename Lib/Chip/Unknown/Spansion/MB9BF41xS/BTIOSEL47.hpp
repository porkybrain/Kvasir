#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Base Timer I/O Select
    namespace Nonebtsel4567{    ///<I/O Select Register
        using Addr = Register::Address<0x40025300,0xffff00ff,0,unsigned>;
        ///I/O select bits for Ch.6/Ch.7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> sel67{}; 
        namespace Sel67ValC{
        }
        ///I/O select bits for Ch.4/Ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> sel45{}; 
        namespace Sel45ValC{
        }
    }
}

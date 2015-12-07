#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash configuration field
    namespace NvBackkey3{    ///<Backdoor Comparison Key 3.
        using Addr = Register::Address<0x00000400,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace NvBackkey2{    ///<Backdoor Comparison Key 2.
        using Addr = Register::Address<0x00000401,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace NvBackkey1{    ///<Backdoor Comparison Key 1.
        using Addr = Register::Address<0x00000402,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace NvBackkey0{    ///<Backdoor Comparison Key 0.
        using Addr = Register::Address<0x00000403,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace NvBackkey7{    ///<Backdoor Comparison Key 7.
        using Addr = Register::Address<0x00000404,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace NvBackkey6{    ///<Backdoor Comparison Key 6.
        using Addr = Register::Address<0x00000405,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace NvBackkey5{    ///<Backdoor Comparison Key 5.
        using Addr = Register::Address<0x00000406,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace NvBackkey4{    ///<Backdoor Comparison Key 4.
        using Addr = Register::Address<0x00000407,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace NvFprot3{    ///<Non-volatile P-Flash Protection 1 - Low Register
        using Addr = Register::Address<0x00000408,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
    }
    namespace NvFprot2{    ///<Non-volatile P-Flash Protection 1 - High Register
        using Addr = Register::Address<0x00000409,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
    }
    namespace NvFprot1{    ///<Non-volatile P-Flash Protection 0 - Low Register
        using Addr = Register::Address<0x0000040a,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
    }
    namespace NvFprot0{    ///<Non-volatile P-Flash Protection 0 - High Register
        using Addr = Register::Address<0x0000040b,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
    }
    namespace NvFsec{    ///<Non-volatile Flash Security Register
        using Addr = Register::Address<0x0000040c,0xffffff00,0,unsigned char>;
        ///Flash Security
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sec{}; 
        namespace SecValC{
        }
        ///Freescale Failure Analysis Access Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> fslacc{}; 
        namespace FslaccValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> meen{}; 
        namespace MeenValC{
        }
        ///Backdoor Key Security Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> keyen{}; 
        namespace KeyenValC{
        }
    }
    namespace NvFopt{    ///<Non-volatile Flash Option Register
        using Addr = Register::Address<0x0000040d,0xfffffff8,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpboot{}; 
        namespace LpbootValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ezportDis{}; 
        namespace EzportdisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nmiDis{}; 
        namespace NmidisValC{
        }
    }
    namespace NvFeprot{    ///<Non-volatile EERAM Protection Register
        using Addr = Register::Address<0x0000040e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eprot{}; 
        namespace EprotValC{
        }
    }
    namespace NvFdprot{    ///<Non-volatile D-Flash Protection Register
        using Addr = Register::Address<0x0000040f,0xffffff00,0,unsigned char>;
        ///D-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dprot{}; 
        namespace DprotValC{
        }
    }
}

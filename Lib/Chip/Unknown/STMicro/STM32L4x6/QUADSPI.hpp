#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//QuadSPI interface
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0xa0001000,0x0020e020,0,unsigned>;
        ///Clock prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> prescaler{}; 
        namespace PrescalerValC{
        }
        ///Polling match mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pmm{}; 
        namespace PmmValC{
        }
        ///Automatic poll mode stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> apms{}; 
        namespace ApmsValC{
        }
        ///TimeOut interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> toie{}; 
        namespace ToieValC{
        }
        ///Status match interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> smie{}; 
        namespace SmieValC{
        }
        ///FIFO threshold interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///IFO threshold level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> fthres{}; 
        namespace FthresValC{
        }
        ///FLASH memory selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
        ///Dual-flash mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dfm{}; 
        namespace DfmValC{
        }
        ///Sample shift
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sshift{}; 
        namespace SshiftValC{
        }
        ///Timeout counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcen{}; 
        namespace TcenValC{
        }
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///Abort request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> abort{}; 
        namespace AbortValC{
        }
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonedcr{    ///<device configuration register
        using Addr = Register::Address<0xa0001004,0xffe0f8fe,0,unsigned>;
        ///FLASH memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> fsize{}; 
        namespace FsizeValC{
        }
        ///Chip select high time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> csht{}; 
        namespace CshtValC{
        }
        ///Mode 0 / mode 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ckmode{}; 
        namespace CkmodeValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0xa0001008,0xffff80c0,0,unsigned>;
        ///FIFO level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> flevel{}; 
        namespace FlevelValC{
        }
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Timeout flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tof{}; 
        namespace TofValC{
        }
        ///Status match flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> smf{}; 
        namespace SmfValC{
        }
        ///FIFO threshold flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ftf{}; 
        namespace FtfValC{
        }
        ///Transfer complete flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcf{}; 
        namespace TcfValC{
        }
        ///Transfer error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tef{}; 
        namespace TefValC{
        }
    }
    namespace Nonefcr{    ///<flag clear register
        using Addr = Register::Address<0xa000100c,0xffffffe4,0,unsigned>;
        ///Clear timeout flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctof{}; 
        namespace CtofValC{
        }
        ///Clear status match flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csmf{}; 
        namespace CsmfValC{
        }
        ///Clear transfer complete
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcf{}; 
        namespace CtcfValC{
        }
        ///Clear transfer error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctef{}; 
        namespace CtefValC{
        }
    }
    namespace Nonedlr{    ///<data length register
        using Addr = Register::Address<0xa0001010,0x00000000,0,unsigned>;
        ///Data length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dl{}; 
        namespace DlValC{
        }
    }
    namespace Noneccr{    ///<communication configuration
          register
        using Addr = Register::Address<0xa0001014,0x20800000,0,unsigned>;
        ///Double data rate mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ddrm{}; 
        namespace DdrmValC{
        }
        ///DDR hold half cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dhhc{}; 
        namespace DhhcValC{
        }
        ///Send instruction only once
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sioo{}; 
        namespace SiooValC{
        }
        ///Functional mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> fmode{}; 
        namespace FmodeValC{
        }
        ///Data mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> dmode{}; 
        namespace DmodeValC{
        }
        ///Number of dummy cycles
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> dcyc{}; 
        namespace DcycValC{
        }
        ///Alternate bytes size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> absize{}; 
        namespace AbsizeValC{
        }
        ///Alternate bytes mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> abmode{}; 
        namespace AbmodeValC{
        }
        ///Address size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> adsize{}; 
        namespace AdsizeValC{
        }
        ///Address mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> admode{}; 
        namespace AdmodeValC{
        }
        ///Instruction mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> imode{}; 
        namespace ImodeValC{
        }
        ///Instruction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> instruction{}; 
        namespace InstructionValC{
        }
    }
    namespace Nonear{    ///<address register
        using Addr = Register::Address<0xa0001018,0x00000000,0,unsigned>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
        namespace AddressValC{
        }
    }
    namespace Noneabr{    ///<ABR
        using Addr = Register::Address<0xa000101c,0x00000000,0,unsigned>;
        ///ALTERNATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alternate{}; 
        namespace AlternateValC{
        }
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0xa0001020,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Nonepsmkr{    ///<polling status mask register
        using Addr = Register::Address<0xa0001024,0x00000000,0,unsigned>;
        ///Status mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
    }
    namespace Nonepsmar{    ///<polling status match register
        using Addr = Register::Address<0xa0001028,0x00000000,0,unsigned>;
        ///Status match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
        namespace MatchValC{
        }
    }
    namespace Nonepir{    ///<polling interval register
        using Addr = Register::Address<0xa000102c,0xffff0000,0,unsigned>;
        ///Polling interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> interval{}; 
        namespace IntervalValC{
        }
    }
    namespace Nonelptr{    ///<low-power timeout register
        using Addr = Register::Address<0xa0001030,0xffff0000,0,unsigned>;
        ///Timeout period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
    }
}

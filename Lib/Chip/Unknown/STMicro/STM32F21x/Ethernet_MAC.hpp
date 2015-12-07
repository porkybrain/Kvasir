#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet: media access control
      (MAC)
    namespace Nonemaccr{    ///<Ethernet MAC configuration
          register
        using Addr = Register::Address<0x40028000,0xfd308103,0,unsigned>;
        ///RE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> re{}; 
        namespace ReValC{
        }
        ///TE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> te{}; 
        namespace TeValC{
        }
        ///DC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dc{}; 
        namespace DcValC{
        }
        ///BL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> bl{}; 
        namespace BlValC{
        }
        ///APCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> apcs{}; 
        namespace ApcsValC{
        }
        ///RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rd{}; 
        namespace RdValC{
        }
        ///IPCO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ipco{}; 
        namespace IpcoValC{
        }
        ///DM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dm{}; 
        namespace DmValC{
        }
        ///LM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lm{}; 
        namespace LmValC{
        }
        ///ROD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rod{}; 
        namespace RodValC{
        }
        ///FES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fes{}; 
        namespace FesValC{
        }
        ///CSD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> csd{}; 
        namespace CsdValC{
        }
        ///IFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> ifg{}; 
        namespace IfgValC{
        }
        ///JD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jd{}; 
        namespace JdValC{
        }
        ///WD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> wd{}; 
        namespace WdValC{
        }
        ///CSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cstf{}; 
        namespace CstfValC{
        }
    }
    namespace Nonemacffr{    ///<Ethernet MAC frame filter
          register
        using Addr = Register::Address<0x40028004,0x7ffff880,0,unsigned>;
        ///Promiscuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
        ///Hash unicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hu{}; 
        namespace HuValC{
        }
        ///Hash multicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hm{}; 
        namespace HmValC{
        }
        ///Destination address inverse
              filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> daif{}; 
        namespace DaifValC{
        }
        ///Pass all multicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pam{}; 
        namespace PamValC{
        }
        ///Broadcast frames disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bfd{}; 
        namespace BfdValC{
        }
        ///Pass control frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pcf{}; 
        namespace PcfValC{
        }
        ///Source address inverse
              filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> saif{}; 
        namespace SaifValC{
        }
        ///Source address filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> saf{}; 
        namespace SafValC{
        }
        ///Hash or perfect filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hpf{}; 
        namespace HpfValC{
        }
        ///Receive all
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
    }
    namespace Nonemachthr{    ///<Ethernet MAC hash table high
          register
        using Addr = Register::Address<0x40028008,0x00000000,0,unsigned>;
        ///Hash table high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hth{}; 
        namespace HthValC{
        }
    }
    namespace Nonemachtlr{    ///<Ethernet MAC hash table low
          register
        using Addr = Register::Address<0x4002800c,0x00000000,0,unsigned>;
        ///Hash table low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htl{}; 
        namespace HtlValC{
        }
    }
    namespace Nonemacmiiar{    ///<Ethernet MAC MII address
          register
        using Addr = Register::Address<0x40028010,0xffff0020,0,unsigned>;
        ///MII busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mb{}; 
        namespace MbValC{
        }
        ///MII write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mw{}; 
        namespace MwValC{
        }
        ///Clock range
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cr{}; 
        namespace CrValC{
        }
        ///MII register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> mr{}; 
        namespace MrValC{
        }
        ///PHY address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonemacmiidr{    ///<Ethernet MAC MII data register
        using Addr = Register::Address<0x40028014,0xffff0000,0,unsigned>;
        ///MII data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
    }
    namespace Nonemacfcr{    ///<Ethernet MAC flow control
          register
        using Addr = Register::Address<0x40028018,0x0000ff40,0,unsigned>;
        ///Flow control busy/back pressure
              activate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcb{}; 
        namespace FcbValC{
        }
        ///Transmit flow control
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfce{}; 
        namespace TfceValC{
        }
        ///Receive flow control
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfce{}; 
        namespace RfceValC{
        }
        ///Unicast pause frame detect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> upfd{}; 
        namespace UpfdValC{
        }
        ///Pause low threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> plt{}; 
        namespace PltValC{
        }
        ///Zero-quanta pause disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> zqpd{}; 
        namespace ZqpdValC{
        }
        ///Pause time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pt{}; 
        namespace PtValC{
        }
    }
    namespace Nonemacvlantr{    ///<Ethernet MAC VLAN tag register
        using Addr = Register::Address<0x4002801c,0xfffe0000,0,unsigned>;
        ///VLAN tag identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vlanti{}; 
        namespace VlantiValC{
        }
        ///12-bit VLAN tag comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> vlantc{}; 
        namespace VlantcValC{
        }
    }
    namespace Nonemacpmtcsr{    ///<Ethernet MAC PMT control and status
          register
        using Addr = Register::Address<0x4002802c,0x7ffffd98,0,unsigned>;
        ///Power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Magic Packet enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mpe{}; 
        namespace MpeValC{
        }
        ///Wakeup frame enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wfe{}; 
        namespace WfeValC{
        }
        ///Magic packet received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mpr{}; 
        namespace MprValC{
        }
        ///Wakeup frame received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wfr{}; 
        namespace WfrValC{
        }
        ///Global unicast
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gu{}; 
        namespace GuValC{
        }
        ///Wakeup frame filter register pointer
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wffrpr{}; 
        namespace WffrprValC{
        }
    }
    namespace Nonemacdbgr{    ///<Ethernet MAC debug register
        using Addr = Register::Address<0x40028034,0xfc80fecc,0,unsigned>;
        ///MAC MII receive protocol engine
              active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mmrpea{}; 
        namespace MmrpeaValC{
        }
        ///MAC small FIFO read / write controllers
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msfrwcs{}; 
        namespace MsfrwcsValC{
        }
        ///Rx FIFO write controller
              active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rfwra{}; 
        namespace RfwraValC{
        }
        ///Rx FIFO read controller
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfrcs{}; 
        namespace RfrcsValC{
        }
        ///Rx FIFO fill level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rffl{}; 
        namespace RfflValC{
        }
        ///MAC MII transmit engine
              active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mmtea{}; 
        namespace MmteaValC{
        }
        ///MAC transmit frame controller
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> mtfcs{}; 
        namespace MtfcsValC{
        }
        ///MAC transmitter in pause
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mtp{}; 
        namespace MtpValC{
        }
        ///Tx FIFO read status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tfrs{}; 
        namespace TfrsValC{
        }
        ///Tx FIFO write active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tfwa{}; 
        namespace TfwaValC{
        }
        ///Tx FIFO not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tfne{}; 
        namespace TfneValC{
        }
        ///Tx FIFO full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tff{}; 
        namespace TffValC{
        }
    }
    namespace Nonemacsr{    ///<Ethernet MAC interrupt status
          register
        using Addr = Register::Address<0x40028038,0xfffffd87,0,unsigned>;
        ///PMT status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmts{}; 
        namespace PmtsValC{
        }
        ///MMC status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mmcs{}; 
        namespace MmcsValC{
        }
        ///MMC receive status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mmcrs{}; 
        namespace MmcrsValC{
        }
        ///MMC transmit status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mmcts{}; 
        namespace MmctsValC{
        }
        ///Time stamp trigger status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tsts{}; 
        namespace TstsValC{
        }
    }
    namespace Nonemacimr{    ///<Ethernet MAC interrupt mask
          register
        using Addr = Register::Address<0x4002803c,0xfffffdf7,0,unsigned>;
        ///PMT interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmtim{}; 
        namespace PmtimValC{
        }
        ///Time stamp trigger interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstim{}; 
        namespace TstimValC{
        }
    }
    namespace Nonemaca0hr{    ///<Ethernet MAC address 0 high
          register
        using Addr = Register::Address<0x40028040,0x7fff0000,0,unsigned>;
        ///MAC address0 high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> maca0h{}; 
        namespace Maca0hValC{
        }
        ///MO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mo{}; 
        namespace MoValC{
        }
    }
    namespace Nonemaca0lr{    ///<Ethernet MAC address 0 low
          register
        using Addr = Register::Address<0x40028044,0x00000000,0,unsigned>;
        ///MAC address0 low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maca0l{}; 
        namespace Maca0lValC{
        }
    }
    namespace Nonemaca1hr{    ///<Ethernet MAC address 1 high
          register
        using Addr = Register::Address<0x40028048,0x00ff0000,0,unsigned>;
        ///MAC address1 high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> maca1h{}; 
        namespace Maca1hValC{
        }
        ///Mask byte control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        namespace MbcValC{
        }
        ///Source address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
        ///Address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
        namespace AeValC{
        }
    }
    namespace Nonemaca1lr{    ///<Ethernet MAC address1 low
          register
        using Addr = Register::Address<0x4002804c,0x00000000,0,unsigned>;
        ///MAC address1 low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maca1lr{}; 
        namespace Maca1lrValC{
        }
    }
    namespace Nonemaca2hr{    ///<Ethernet MAC address 2 high
          register
        using Addr = Register::Address<0x40028050,0x00ff0000,0,unsigned>;
        ///MAC address2 high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mac2ah{}; 
        namespace Mac2ahValC{
        }
        ///Mask byte control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        namespace MbcValC{
        }
        ///Source address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
        ///Address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
        namespace AeValC{
        }
    }
    namespace Nonemaca2lr{    ///<Ethernet MAC address 2 low
          register
        using Addr = Register::Address<0x40028054,0x80000000,0,unsigned>;
        ///MAC address2 low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> maca2l{}; 
        namespace Maca2lValC{
        }
    }
    namespace Nonemaca3hr{    ///<Ethernet MAC address 3 high
          register
        using Addr = Register::Address<0x40028058,0x00ff0000,0,unsigned>;
        ///MAC address3 high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> maca3h{}; 
        namespace Maca3hValC{
        }
        ///Mask byte control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> mbc{}; 
        namespace MbcValC{
        }
        ///Source address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
        ///Address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ae{}; 
        namespace AeValC{
        }
    }
    namespace Nonemaca3lr{    ///<Ethernet MAC address 3 low
          register
        using Addr = Register::Address<0x4002805c,0x00000000,0,unsigned>;
        ///MAC address3 low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mbca3l{}; 
        namespace Mbca3lValC{
        }
    }
    namespace Nonemacrwuffr{    ///<Ethernet MAC remote wakeup frame filter
          register
        using Addr = Register::Address<0x40028028,0xffffffff,0,unsigned>;
    }
}

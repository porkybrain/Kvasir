#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced-timers
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40013400,0xfffffc00,0,unsigned>;
        ///Clock division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ckd{}; 
        namespace CkdValC{
        }
        ///Auto-reload preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arpe{}; 
        namespace ArpeValC{
        }
        ///Center-aligned mode
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> cms{}; 
        namespace CmsValC{
        }
        ///Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///One-pulse mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        namespace OpmValC{
        }
        ///Update request source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        namespace UrsValC{
        }
        ///Update disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        namespace UdisValC{
        }
        ///Counter enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40013404,0xffff8002,0,unsigned>;
        ///Output Idle state 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ois4{}; 
        namespace Ois4ValC{
        }
        ///Output Idle state 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ois3n{}; 
        namespace Ois3nValC{
        }
        ///Output Idle state 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ois3{}; 
        namespace Ois3ValC{
        }
        ///Output Idle state 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ois2n{}; 
        namespace Ois2nValC{
        }
        ///Output Idle state 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ois2{}; 
        namespace Ois2ValC{
        }
        ///Output Idle state 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ois1n{}; 
        namespace Ois1nValC{
        }
        ///Output Idle state 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ois1{}; 
        namespace Ois1ValC{
        }
        ///TI1 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ti1s{}; 
        namespace Ti1sValC{
        }
        ///Master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
        namespace MmsValC{
        }
        ///Capture/compare DMA
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ccds{}; 
        namespace CcdsValC{
        }
        ///Capture/compare control update
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ccus{}; 
        namespace CcusValC{
        }
        ///Capture/compare preloaded
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccpc{}; 
        namespace CcpcValC{
        }
    }
    namespace Nonesmcr{    ///<slave mode control register
        using Addr = Register::Address<0x40013408,0xffff0008,0,unsigned>;
        ///External trigger polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> etp{}; 
        namespace EtpValC{
        }
        ///External clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ece{}; 
        namespace EceValC{
        }
        ///External trigger prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etps{}; 
        namespace EtpsValC{
        }
        ///External trigger filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        namespace EtfValC{
        }
        ///Master/Slave mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msm{}; 
        namespace MsmValC{
        }
        ///Trigger selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        namespace TsValC{
        }
        ///Slave mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sms{}; 
        namespace SmsValC{
        }
    }
    namespace Nonedier{    ///<DMA/Interrupt enable register
        using Addr = Register::Address<0x4001340c,0xffff8000,0,unsigned>;
        ///Trigger DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tde{}; 
        namespace TdeValC{
        }
        ///COM DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> comde{}; 
        namespace ComdeValC{
        }
        ///Capture/Compare 4 DMA request
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4de{}; 
        namespace Cc4deValC{
        }
        ///Capture/Compare 3 DMA request
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3de{}; 
        namespace Cc3deValC{
        }
        ///Capture/Compare 2 DMA request
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2de{}; 
        namespace Cc2deValC{
        }
        ///Capture/Compare 1 DMA request
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1de{}; 
        namespace Cc1deValC{
        }
        ///Update DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ude{}; 
        namespace UdeValC{
        }
        ///Trigger interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///Capture/Compare 4 interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4ie{}; 
        namespace Cc4ieValC{
        }
        ///Capture/Compare 3 interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3ie{}; 
        namespace Cc3ieValC{
        }
        ///Capture/Compare 2 interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2ie{}; 
        namespace Cc2ieValC{
        }
        ///Capture/Compare 1 interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        namespace Cc1ieValC{
        }
        ///Update interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
        namespace UieValC{
        }
        ///Break interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bie{}; 
        namespace BieValC{
        }
        ///COM interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comie{}; 
        namespace ComieValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40013410,0xffffe100,0,unsigned>;
        ///Capture/Compare 4 overcapture
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4of{}; 
        namespace Cc4ofValC{
        }
        ///Capture/Compare 3 overcapture
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3of{}; 
        namespace Cc3ofValC{
        }
        ///Capture/compare 2 overcapture
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2of{}; 
        namespace Cc2ofValC{
        }
        ///Capture/Compare 1 overcapture
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1of{}; 
        namespace Cc1ofValC{
        }
        ///Break interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bif{}; 
        namespace BifValC{
        }
        ///Trigger interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        namespace TifValC{
        }
        ///COM interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comif{}; 
        namespace ComifValC{
        }
        ///Capture/Compare 4 interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4if{}; 
        namespace Cc4ifValC{
        }
        ///Capture/Compare 3 interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3if{}; 
        namespace Cc3ifValC{
        }
        ///Capture/Compare 2 interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2if{}; 
        namespace Cc2ifValC{
        }
        ///Capture/compare 1 interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        namespace Cc1ifValC{
        }
        ///Update interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
        namespace UifValC{
        }
    }
    namespace Noneegr{    ///<event generation register
        using Addr = Register::Address<0x40013414,0xffffff00,0,unsigned>;
        ///Break generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bg{}; 
        namespace BgValC{
        }
        ///Trigger generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        namespace TgValC{
        }
        ///Capture/Compare control update
              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comg{}; 
        namespace ComgValC{
        }
        ///Capture/compare 4
              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4g{}; 
        namespace Cc4gValC{
        }
        ///Capture/compare 3
              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3g{}; 
        namespace Cc3gValC{
        }
        ///Capture/compare 2
              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2g{}; 
        namespace Cc2gValC{
        }
        ///Capture/compare 1
              generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        namespace Cc1gValC{
        }
        ///Update generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
        namespace UgValC{
        }
    }
    namespace Noneccmr1Output{    ///<capture/compare mode register 1 (output
          mode)
        using Addr = Register::Address<0x40013418,0xffff0000,0,unsigned>;
        ///Output Compare 2 clear
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oc2ce{}; 
        namespace Oc2ceValC{
        }
        ///Output Compare 2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc2m{}; 
        namespace Oc2mValC{
        }
        ///Output Compare 2 preload
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc2pe{}; 
        namespace Oc2peValC{
        }
        ///Output Compare 2 fast
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc2fe{}; 
        namespace Oc2feValC{
        }
        ///Capture/Compare 2
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        namespace Cc2sValC{
        }
        ///Output Compare 1 clear
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc1ce{}; 
        namespace Oc1ceValC{
        }
        ///Output Compare 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        namespace Oc1mValC{
        }
        ///Output Compare 1 preload
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        namespace Oc1peValC{
        }
        ///Output Compare 1 fast
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        namespace Oc1feValC{
        }
        ///Capture/Compare 1
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        namespace Cc1sValC{
        }
    }
    namespace Noneccmr1Input{    ///<capture/compare mode register 1 (input
          mode)
        using Addr = Register::Address<0x40013418,0xffff0000,0,unsigned>;
        ///Input capture 2 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic2f{}; 
        namespace Ic2fValC{
        }
        ///Input capture 2 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic2pcs{}; 
        namespace Ic2pcsValC{
        }
        ///Capture/Compare 2
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        namespace Cc2sValC{
        }
        ///Input capture 1 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        namespace Ic1fValC{
        }
        ///Input capture 1 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> icpcs{}; 
        namespace IcpcsValC{
        }
        ///Capture/Compare 1
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        namespace Cc1sValC{
        }
    }
    namespace Noneccmr2Output{    ///<capture/compare mode register 2 (output
          mode)
        using Addr = Register::Address<0x4001341c,0xffff0000,0,unsigned>;
        ///Output compare 4 clear
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oc4ce{}; 
        namespace Oc4ceValC{
        }
        ///Output compare 4 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc4m{}; 
        namespace Oc4mValC{
        }
        ///Output compare 4 preload
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc4pe{}; 
        namespace Oc4peValC{
        }
        ///Output compare 4 fast
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc4fe{}; 
        namespace Oc4feValC{
        }
        ///Capture/Compare 4
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        namespace Cc4sValC{
        }
        ///Output compare 3 clear
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc3ce{}; 
        namespace Oc3ceValC{
        }
        ///Output compare 3 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc3m{}; 
        namespace Oc3mValC{
        }
        ///Output compare 3 preload
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc3pe{}; 
        namespace Oc3peValC{
        }
        ///Output compare 3 fast
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc3fe{}; 
        namespace Oc3feValC{
        }
        ///Capture/Compare 3
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
        namespace Cc3sValC{
        }
    }
    namespace Noneccmr2Input{    ///<capture/compare mode register 2 (input
          mode)
        using Addr = Register::Address<0x4001341c,0xffff0000,0,unsigned>;
        ///Input capture 4 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic4f{}; 
        namespace Ic4fValC{
        }
        ///Input capture 4 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic4psc{}; 
        namespace Ic4pscValC{
        }
        ///Capture/Compare 4
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        namespace Cc4sValC{
        }
        ///Input capture 3 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic3f{}; 
        namespace Ic3fValC{
        }
        ///Input capture 3 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic3psc{}; 
        namespace Ic3pscValC{
        }
        ///Capture/compare 3
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
        namespace Cc3sValC{
        }
    }
    namespace Noneccer{    ///<capture/compare enable
          register
        using Addr = Register::Address<0x40013420,0xffffc000,0,unsigned>;
        ///Capture/Compare 3 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cc4p{}; 
        namespace Cc4pValC{
        }
        ///Capture/Compare 4 output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4e{}; 
        namespace Cc4eValC{
        }
        ///Capture/Compare 3 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3np{}; 
        namespace Cc3npValC{
        }
        ///Capture/Compare 3 complementary output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc3ne{}; 
        namespace Cc3neValC{
        }
        ///Capture/Compare 3 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc3p{}; 
        namespace Cc3pValC{
        }
        ///Capture/Compare 3 output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc3e{}; 
        namespace Cc3eValC{
        }
        ///Capture/Compare 2 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cc2np{}; 
        namespace Cc2npValC{
        }
        ///Capture/Compare 2 complementary output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cc2ne{}; 
        namespace Cc2neValC{
        }
        ///Capture/Compare 2 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cc2p{}; 
        namespace Cc2pValC{
        }
        ///Capture/Compare 2 output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc2e{}; 
        namespace Cc2eValC{
        }
        ///Capture/Compare 1 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc1np{}; 
        namespace Cc1npValC{
        }
        ///Capture/Compare 1 complementary output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc1ne{}; 
        namespace Cc1neValC{
        }
        ///Capture/Compare 1 output
              Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        namespace Cc1pValC{
        }
        ///Capture/Compare 1 output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
        namespace Cc1eValC{
        }
    }
    namespace Nonecnt{    ///<counter
        using Addr = Register::Address<0x40013424,0xffff0000,0,unsigned>;
        ///counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonepsc{    ///<prescaler
        using Addr = Register::Address<0x40013428,0xffff0000,0,unsigned>;
        ///Prescaler value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
        namespace PscValC{
        }
    }
    namespace Nonearr{    ///<auto-reload register
        using Addr = Register::Address<0x4001342c,0xffff0000,0,unsigned>;
        ///Auto-reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
        namespace ArrValC{
        }
    }
    namespace Nonercr{    ///<repetition counter register
        using Addr = Register::Address<0x40013430,0xffffff00,0,unsigned>;
        ///Repetition counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rep{}; 
        namespace RepValC{
        }
    }
    namespace Noneccr1{    ///<capture/compare register 1
        using Addr = Register::Address<0x40013434,0xffff0000,0,unsigned>;
        ///Capture/Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr1{}; 
        namespace Ccr1ValC{
        }
    }
    namespace Noneccr2{    ///<capture/compare register 2
        using Addr = Register::Address<0x40013438,0xffff0000,0,unsigned>;
        ///Capture/Compare 2 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr2{}; 
        namespace Ccr2ValC{
        }
    }
    namespace Noneccr3{    ///<capture/compare register 3
        using Addr = Register::Address<0x4001343c,0xffff0000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr3{}; 
        namespace Ccr3ValC{
        }
    }
    namespace Noneccr4{    ///<capture/compare register 4
        using Addr = Register::Address<0x40013440,0xffff0000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr4{}; 
        namespace Ccr4ValC{
        }
    }
    namespace Nonebdtr{    ///<break and dead-time register
        using Addr = Register::Address<0x40013444,0xffff0000,0,unsigned>;
        ///Main output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> moe{}; 
        namespace MoeValC{
        }
        ///Automatic output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> aoe{}; 
        namespace AoeValC{
        }
        ///Break polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
        ///Break enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bke{}; 
        namespace BkeValC{
        }
        ///Off-state selection for Run
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ossr{}; 
        namespace OssrValC{
        }
        ///Off-state selection for Idle
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ossi{}; 
        namespace OssiValC{
        }
        ///Lock configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///Dead-time generator setup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtg{}; 
        namespace DtgValC{
        }
    }
    namespace Nonedcr{    ///<DMA control register
        using Addr = Register::Address<0x40013448,0xffffe0e0,0,unsigned>;
        ///DMA burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> dbl{}; 
        namespace DblValC{
        }
        ///DMA base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> dba{}; 
        namespace DbaValC{
        }
    }
    namespace Nonedmar{    ///<DMA address for full transfer
        using Addr = Register::Address<0x4001344c,0xffff0000,0,unsigned>;
        ///DMA register for burst
              accesses
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dmab{}; 
        namespace DmabValC{
        }
    }
    namespace Noneor1{    ///<DMA address for full transfer
        using Addr = Register::Address<0x40013450,0xffffffe0,0,unsigned>;
        ///External trigger remap on ADC2 analog
              watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> etrAdc2Rmp{}; 
        namespace Etradc2rmpValC{
        }
        ///External trigger remap on ADC3 analog
              watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> etrAdc3Rmp{}; 
        namespace Etradc3rmpValC{
        }
        ///Input Capture 1 remap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ti1Rmp{}; 
        namespace Ti1rmpValC{
        }
    }
    namespace Noneccmr3Output{    ///<capture/compare mode register 2 (output
          mode)
        using Addr = Register::Address<0x40013454,0xfef80303,0,unsigned>;
        ///Output Compare 6 mode bit
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> oc6mBit3{}; 
        namespace Oc6mbit3ValC{
        }
        ///Output Compare 5 mode bit
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> oc5mBit3{}; 
        namespace Oc5mbit3ValC{
        }
        ///Output compare 6 clear
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oc6ce{}; 
        namespace Oc6ceValC{
        }
        ///Output compare 6 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc6m{}; 
        namespace Oc6mValC{
        }
        ///Output compare 6 preload
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc6pe{}; 
        namespace Oc6peValC{
        }
        ///Output compare 6 fast
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc6fe{}; 
        namespace Oc6feValC{
        }
        ///Output compare 5 clear
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oc5ce{}; 
        namespace Oc5ceValC{
        }
        ///Output compare 5 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc5m{}; 
        namespace Oc5mValC{
        }
        ///Output compare 5 preload
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc5pe{}; 
        namespace Oc5peValC{
        }
        ///Output compare 5 fast
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc5fe{}; 
        namespace Oc5feValC{
        }
    }
    namespace Noneccr5{    ///<capture/compare register 4
        using Addr = Register::Address<0x40013458,0x1fff0000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr5{}; 
        namespace Ccr5ValC{
        }
        ///Group Channel 5 and Channel
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> gc5c1{}; 
        namespace Gc5c1ValC{
        }
        ///Group Channel 5 and Channel
              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> gc5c2{}; 
        namespace Gc5c2ValC{
        }
        ///Group Channel 5 and Channel
              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> gc5c3{}; 
        namespace Gc5c3ValC{
        }
    }
    namespace Noneccr6{    ///<capture/compare register 4
        using Addr = Register::Address<0x4001345c,0xffff0000,0,unsigned>;
        ///Capture/Compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr6{}; 
        namespace Ccr6ValC{
        }
    }
    namespace Noneor2{    ///<DMA address for full transfer
        using Addr = Register::Address<0x40013460,0xfffe30f8,0,unsigned>;
        ///BRK BKIN input enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bkine{}; 
        namespace BkineValC{
        }
        ///BRK COMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bkcmp1e{}; 
        namespace Bkcmp1eValC{
        }
        ///BRK COMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bkcmp2e{}; 
        namespace Bkcmp2eValC{
        }
        ///BRK DFSDM_BREAK2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bkdfbk2e{}; 
        namespace Bkdfbk2eValC{
        }
        ///BRK BKIN input polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bkinp{}; 
        namespace BkinpValC{
        }
        ///BRK COMP1 input polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bkcmp1p{}; 
        namespace Bkcmp1pValC{
        }
        ///BRK COMP2 input polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bkcmp2p{}; 
        namespace Bkcmp2pValC{
        }
        ///ETR source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> etrsel{}; 
        namespace EtrselValC{
        }
    }
    namespace Noneor3{    ///<DMA address for full transfer
        using Addr = Register::Address<0x40013464,0xfffff0f8,0,unsigned>;
        ///BRK2 BKIN input enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bk2ine{}; 
        namespace Bk2ineValC{
        }
        ///BRK2 COMP1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bk2cmp1e{}; 
        namespace Bk2cmp1eValC{
        }
        ///BRK2 COMP2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bk2cmp2e{}; 
        namespace Bk2cmp2eValC{
        }
        ///BRK2 DFSDM_BREAK3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bk2dfbk3e{}; 
        namespace Bk2dfbk3eValC{
        }
        ///BRK2 BKIN input polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bk2inp{}; 
        namespace Bk2inpValC{
        }
        ///BRK2 COMP1 input polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bk2cmp1p{}; 
        namespace Bk2cmp1pValC{
        }
        ///BRK2 COMP2 input polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bk2cmp2p{}; 
        namespace Bk2cmp2pValC{
        }
    }
}

#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller
    namespace DmacGcfg{    ///<DMAC Global Configuration Register
        using Addr = Register::Address<0xffffec00,0xffffffef,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arbCfg{}; 
        namespace ArbcfgValC{
        }
    }
    namespace DmacEn{    ///<DMAC Enable Register
        using Addr = Register::Address<0xffffec04,0xfffffffe,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
    }
    namespace DmacSreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0xffffec08,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        namespace Ssreq0ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        namespace Dsreq0ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        namespace Ssreq1ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        namespace Dsreq1ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        namespace Ssreq2ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        namespace Dsreq2ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        namespace Ssreq3ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
        namespace Dsreq3ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssreq4{}; 
        namespace Ssreq4ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsreq4{}; 
        namespace Dsreq4ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssreq5{}; 
        namespace Ssreq5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dsreq5{}; 
        namespace Dsreq5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ssreq6{}; 
        namespace Ssreq6ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dsreq6{}; 
        namespace Dsreq6ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ssreq7{}; 
        namespace Ssreq7ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dsreq7{}; 
        namespace Dsreq7ValC{
        }
    }
    namespace DmacCreq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0xffffec0c,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        namespace Screq0ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        namespace Dcreq0ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        namespace Screq1ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        namespace Dcreq1ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        namespace Screq2ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        namespace Dcreq2ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        namespace Screq3ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
        namespace Dcreq3ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> screq4{}; 
        namespace Screq4ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dcreq4{}; 
        namespace Dcreq4ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> screq5{}; 
        namespace Screq5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dcreq5{}; 
        namespace Dcreq5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> screq6{}; 
        namespace Screq6ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dcreq6{}; 
        namespace Dcreq6ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> screq7{}; 
        namespace Screq7ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dcreq7{}; 
        namespace Dcreq7ValC{
        }
    }
    namespace DmacLast{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0xffffec10,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        namespace Slast0ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        namespace Dlast0ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        namespace Slast1ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        namespace Dlast1ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        namespace Slast2ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        namespace Dlast2ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        namespace Slast3ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
        namespace Dlast3ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slast4{}; 
        namespace Slast4ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlast4{}; 
        namespace Dlast4ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slast5{}; 
        namespace Slast5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dlast5{}; 
        namespace Dlast5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> slast6{}; 
        namespace Slast6ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dlast6{}; 
        namespace Dlast6ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> slast7{}; 
        namespace Slast7ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dlast7{}; 
        namespace Dlast7ValC{
        }
    }
    namespace DmacEbcier{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register.
        using Addr = Register::Address<0xffffec18,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        namespace Btc6ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        namespace Btc7ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        namespace Cbtc6ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        namespace Cbtc7ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
    }
    namespace DmacEbcidr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register.
        using Addr = Register::Address<0xffffec1c,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        namespace Btc6ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        namespace Btc7ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        namespace Cbtc6ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        namespace Cbtc7ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
    }
    namespace DmacEbcimr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0xffffec20,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        namespace Btc6ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        namespace Btc7ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        namespace Cbtc6ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        namespace Cbtc7ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
    }
    namespace DmacEbcisr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Status Register.
        using Addr = Register::Address<0xffffec24,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        namespace Btc6ValC{
        }
        ///Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        namespace Btc7ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        namespace Cbtc6ValC{
        }
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        namespace Cbtc7ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        namespace Err6ValC{
        }
        ///Access Error [7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
        namespace Err7ValC{
        }
    }
    namespace DmacCher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0xffffec28,0x00ff0000,0,unsigned>;
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        namespace Ena6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        namespace Ena7ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        namespace Susp0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        namespace Susp1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        namespace Susp2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        namespace Susp3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        namespace Susp4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        namespace Susp5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> susp6{}; 
        namespace Susp6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> susp7{}; 
        namespace Susp7ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> keep0{}; 
        namespace Keep0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> keep1{}; 
        namespace Keep1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> keep2{}; 
        namespace Keep2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> keep3{}; 
        namespace Keep3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> keep4{}; 
        namespace Keep4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> keep5{}; 
        namespace Keep5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> keep6{}; 
        namespace Keep6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> keep7{}; 
        namespace Keep7ValC{
        }
    }
    namespace DmacChdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0xffffec2c,0xffff0000,0,unsigned>;
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis0{}; 
        namespace Dis0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis1{}; 
        namespace Dis1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2{}; 
        namespace Dis2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dis3{}; 
        namespace Dis3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dis4{}; 
        namespace Dis4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dis5{}; 
        namespace Dis5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dis6{}; 
        namespace Dis6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dis7{}; 
        namespace Dis7ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> res0{}; 
        namespace Res0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> res1{}; 
        namespace Res1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> res2{}; 
        namespace Res2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> res3{}; 
        namespace Res3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> res4{}; 
        namespace Res4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> res5{}; 
        namespace Res5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> res6{}; 
        namespace Res6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> res7{}; 
        namespace Res7ValC{
        }
    }
    namespace DmacChsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0xffffec30,0x00000000,0,unsigned>;
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        namespace Ena6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        namespace Ena7ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        namespace Susp0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        namespace Susp1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        namespace Susp2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        namespace Susp3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        namespace Susp4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        namespace Susp5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> susp6{}; 
        namespace Susp6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> susp7{}; 
        namespace Susp7ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> empt0{}; 
        namespace Empt0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> empt1{}; 
        namespace Empt1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> empt2{}; 
        namespace Empt2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> empt3{}; 
        namespace Empt3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> empt4{}; 
        namespace Empt4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> empt5{}; 
        namespace Empt5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> empt6{}; 
        namespace Empt6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> empt7{}; 
        namespace Empt7ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stal0{}; 
        namespace Stal0ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stal1{}; 
        namespace Stal1ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stal2{}; 
        namespace Stal2ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stal3{}; 
        namespace Stal3ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> stal4{}; 
        namespace Stal4ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stal5{}; 
        namespace Stal5ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> stal6{}; 
        namespace Stal6ValC{
        }
        ///[7:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stal7{}; 
        namespace Stal7ValC{
        }
    }
    namespace DmacSaddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec3c,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec40,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec44,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0xffffec48,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///None
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///None
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///None
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///None
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb0{    ///<DMAC Channel Control B Register (ch_num = 0)
        using Addr = Register::Address<0xffffec4c,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        namespace SrcdscrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        namespace DstdscrValC{
        }
        ///None
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDperFc> per2perDperFc{};
        }
        ///None
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///None
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
    }
    namespace DmacCfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec50,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        namespace SrcrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        namespace Srch2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        namespace DstrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        namespace Dsth2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        namespace LockifValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        namespace LockbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        namespace LockiflValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///None
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec64,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec68,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec6c,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0xffffec70,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///None
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///None
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///None
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///None
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb1{    ///<DMAC Channel Control B Register (ch_num = 1)
        using Addr = Register::Address<0xffffec74,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        namespace SrcdscrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        namespace DstdscrValC{
        }
        ///None
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDperFc> per2perDperFc{};
        }
        ///None
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///None
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
    }
    namespace DmacCfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec78,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        namespace SrcrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        namespace Srch2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        namespace DstrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        namespace Dsth2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        namespace LockifValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        namespace LockbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        namespace LockiflValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///None
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec8c,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec90,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec94,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0xffffec98,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///None
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///None
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///None
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///None
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb2{    ///<DMAC Channel Control B Register (ch_num = 2)
        using Addr = Register::Address<0xffffec9c,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        namespace SrcdscrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        namespace DstdscrValC{
        }
        ///None
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDperFc> per2perDperFc{};
        }
        ///None
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///None
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
    }
    namespace DmacCfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca0,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        namespace SrcrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        namespace Srch2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        namespace DstrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        namespace Dsth2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        namespace LockifValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        namespace LockbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        namespace LockiflValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///None
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb4,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb8,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecbc,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc0,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///None
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///None
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///None
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///None
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb3{    ///<DMAC Channel Control B Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc4,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        namespace SrcdscrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        namespace DstdscrValC{
        }
        ///None
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDperFc> per2perDperFc{};
        }
        ///None
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///None
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
    }
    namespace DmacCfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc8,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        namespace SrcrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        namespace Srch2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        namespace DstrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        namespace Dsth2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        namespace LockifValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        namespace LockbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        namespace LockiflValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///None
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr4{    ///<DMAC Channel Source Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffecdc,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr4{    ///<DMAC Channel Destination Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr4{    ///<DMAC Channel Descriptor Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece4,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla4{    ///<DMAC Channel Control A Register (ch_num = 4)
        using Addr = Register::Address<0xffffece8,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///None
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///None
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///None
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///None
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb4{    ///<DMAC Channel Control B Register (ch_num = 4)
        using Addr = Register::Address<0xffffecec,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        namespace SrcdscrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        namespace DstdscrValC{
        }
        ///None
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDperFc> per2perDperFc{};
        }
        ///None
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///None
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
    }
    namespace DmacCfg4{    ///<DMAC Channel Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf0,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        namespace SrcrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        namespace Srch2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        namespace DstrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        namespace Dsth2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        namespace LockifValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        namespace LockbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        namespace LockiflValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///None
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr5{    ///<DMAC Channel Source Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed04,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr5{    ///<DMAC Channel Destination Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed08,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr5{    ///<DMAC Channel Descriptor Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed0c,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla5{    ///<DMAC Channel Control A Register (ch_num = 5)
        using Addr = Register::Address<0xffffed10,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///None
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///None
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///None
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///None
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb5{    ///<DMAC Channel Control B Register (ch_num = 5)
        using Addr = Register::Address<0xffffed14,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        namespace SrcdscrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        namespace DstdscrValC{
        }
        ///None
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDperFc> per2perDperFc{};
        }
        ///None
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///None
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
    }
    namespace DmacCfg5{    ///<DMAC Channel Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed18,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        namespace SrcrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        namespace Srch2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        namespace DstrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        namespace Dsth2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        namespace LockifValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        namespace LockbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        namespace LockiflValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///None
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr6{    ///<DMAC Channel Source Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed2c,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr6{    ///<DMAC Channel Destination Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed30,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr6{    ///<DMAC Channel Descriptor Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed34,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla6{    ///<DMAC Channel Control A Register (ch_num = 6)
        using Addr = Register::Address<0xffffed38,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///None
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///None
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///None
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///None
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb6{    ///<DMAC Channel Control B Register (ch_num = 6)
        using Addr = Register::Address<0xffffed3c,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        namespace SrcdscrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        namespace DstdscrValC{
        }
        ///None
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDperFc> per2perDperFc{};
        }
        ///None
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///None
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
    }
    namespace DmacCfg6{    ///<DMAC Channel Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed40,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        namespace SrcrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        namespace Srch2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        namespace DstrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        namespace Dsth2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        namespace LockifValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        namespace LockbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        namespace LockiflValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///None
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr7{    ///<DMAC Channel Source Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed54,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr7{    ///<DMAC Channel Destination Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed58,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr7{    ///<DMAC Channel Descriptor Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed5c,0x00000000,0,unsigned>;
        ///None
        enum class DscrifVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,DscrifVal> dscrIf{}; 
        namespace DscrifValC{
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dscrIf),DscrifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla7{    ///<DMAC Channel Control A Register (ch_num = 7)
        using Addr = Register::Address<0xffffed60,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///None
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///None
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///None
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///None
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb7{    ///<DMAC Channel Control B Register (ch_num = 7)
        using Addr = Register::Address<0xffffed64,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class SifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SifVal> sif{}; 
        namespace SifValC{
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(sif),SifVal::ahbIf2> ahbIf2{};
        }
        ///Destination Interface Selection Field
        enum class DifVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DifVal> dif{}; 
        namespace DifValC{
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIfo> ahbIfo{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf1> ahbIf1{};
            constexpr Register::FieldValue<decltype(dif),DifVal::ahbIf2> ahbIf2{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        namespace SrcdscrValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        namespace DstdscrValC{
        }
        ///None
        enum class FcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,FcVal> fc{}; 
        namespace FcValC{
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memDmaFc> per2memDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDmaFc> per2perDmaFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2memPerFc> per2memPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::mem2perPerFc> mem2perPerFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perSperFc> per2perSperFc{};
            constexpr Register::FieldValue<decltype(fc),FcVal::per2perDperFc> per2perDperFc{};
        }
        ///None
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///None
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
        namespace Auto_ValC{
        }
    }
    namespace DmacCfg7{    ///<DMAC Channel Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed68,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        namespace SrcrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        namespace Srch2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        namespace DstrepValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        namespace Dsth2selValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        namespace LockifValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        namespace LockbValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        namespace LockiflValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///None
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xffffede4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace DmacWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xffffede8,0xff0000fe,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}

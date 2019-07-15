//
//  LTBuyErrorCode.h
//  LTSDKGame
//
//  Created by rp.wang on 2019/1/14.
//  Copyright © 2019 gnetop. All rights reserved.
//

#ifndef LTBuyErrorCode_h
#define LTBuyErrorCode_h

//==================================
// 支付模块返回的错误码
//==================================

///探索相关状态
typedef NS_ENUM (int, playTypeCode)
{
    /// 购买成功
    TypePlaySuccess = 1000,
    /// 请求订单时失败
    TypeGetOrderFailure = 1001,
    /// 没有商品 Product list is null
    TypeProductListIsNull = 10002,
    /// 商品ID和苹果给的不匹配Product ID and apple server do not match
    TypeProductIDNotMatch = 1003,
    /// 正在购买 buying
    TypePlayingfromAppleServer = 1004,
    /// 已经收到Apple的购买成功通知 正在和服务器验证
    TypeMineServerVerifying = 1005,
    /// 购买失败
    TypePlayFailureCode = 1006,
    /// 已经购买， Apple正在处理
    TypePlaymentTransactionStateRestored = 1007,
    /// 正在购买中，最终状态还没确定
    TypePlaymentTransactionStateDeferred = 1008,
    /// 服务器验证支付失败
    TypeServerPlaymentVerificationFailed = 1009,
};

#endif /* LTBuyErrorCode_h */

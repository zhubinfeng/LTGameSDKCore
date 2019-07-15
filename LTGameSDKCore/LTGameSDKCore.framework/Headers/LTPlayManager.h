//
//  LTBuyManager.h
//  LTSDKGame
//
//  Created by rp.wang on 2018/12/29.
//  Copyright © 2018 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GoodsModel.h"

//=====================================
// 暴露给外部的接口，调起支付界面 by rp.wang
// Buyment class
//=====================================

NS_ASSUME_NONNULL_BEGIN

// pay success block
typedef void(^playSuccessBlocks)(int code,NSDictionary *successInfoData,NSString *secuessInfoMessage);
// pay failure block
typedef void(^playFailureBlocks)(int error, NSString *errorInfoMessage);
// pay now status
typedef void(^playNowStatusBlocks)(int code, NSString *nowInfoMessage);

@class TLPlayManager;

@interface LTPlayManager : NSObject

-(instancetype)initPlayWithViewModel:(GoodsModel *)goodsModel SuccessBlocks:(playSuccessBlocks)successBlocks failureBlocks:(playFailureBlocks)failureBlocks;

/// Product information 订单信息
@property (strong, nonatomic, nonnull) GoodsModel *goodsModel;

/// 当前支付状态 Blocks
@property (copy, nonatomic) playNowStatusBlocks nowStatusBlocks;

@end

NS_ASSUME_NONNULL_END

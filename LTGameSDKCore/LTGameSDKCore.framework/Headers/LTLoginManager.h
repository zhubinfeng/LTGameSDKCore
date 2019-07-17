//
//  LTLoginManager.h
//  LTGameSDKCore
//
//  Created by ZBF on 2019/7/3.
//  Copyright © 2019 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LTUser.h"
#import "LTPlatformManagerDelegate.h"
#import "LTPlatformConfig.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^loginUserBlock)(LTUser *loginUser);
@interface LTLoginManager : NSObject<LTPlatformManagerDelegate,LTPlatformConfig>
+ (instancetype)sharedInstance;
/**
 注册乐推应用

 @param appId 从乐推平台申请的应用ID
 @param key 从乐推平台生成的应用key
 */
-(void)registLTAppID:(NSString *)appId appkey:(NSString *)key;
/**
 检查用户状态，判断是否可以自动登录
 
 @param block 回调通知
 */
- (void)getUserStateWithServerCheck:(loginUserBlock)block;

/**
 获取当前用户的额信息

 @return 当前用户
 */
- (LTUser *)getUserInfo;

@end

NS_ASSUME_NONNULL_END

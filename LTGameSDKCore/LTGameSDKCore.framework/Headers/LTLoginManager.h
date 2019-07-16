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
 @param vc 当前界面所处的ViewController
 */
-(void)registLTAppID:(NSString *)appId appkey:(NSString *)key;

@property (nonatomic, strong) LTUser *currentUser;
/**
 检查用户状态，判断是否可以自动登录
 
 @param block 回调通知
 */
-(void)getUserLoginState:(loginUserBlock)block;

@end

NS_ASSUME_NONNULL_END

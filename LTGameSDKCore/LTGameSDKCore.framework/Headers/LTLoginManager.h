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
#import "LTGameUserModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^loginUserBlock)(LTUser *loginUser);
@interface LTLoginManager : NSObject<LTPlatformManagerDelegate,LTPlatformConfig>
+ (instancetype)sharedInstance;
/**
 注册乐推应用

 @param appId 从乐推平台申请的应用ID
 @param key 从乐推平台生成的应用key
 */
-(void)registLTAppID:(NSString *)appId appkey:(NSString *)key isDevelopmentModel:(BOOL)isDevelopmentModel;
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
/// 游客账户绑定
/// @param platformType 账号类型
/// @param viewController 当前的ViewController
/// @param callback 回调
- (void)bindTouristWithType:(LTPlatformType)platformType
         fromViewController:(UIViewController *)viewController
                   callback:(loginUserBlock)callback;
//Facebook应用激活统计
- (void)activateAppEvents;
/// 关联游戏内用户信息和SDK用户信息
/// @param gameUser 游戏用户模型
- (void)bindGameUserAndLTUser:(LTGameUserModel *)gameUser;
@end

NS_ASSUME_NONNULL_END

//
//  LTLoginManager.h
//  LTGameSDKCore
//
//  Created by ZBF on 2019/7/3.
//  Copyright © 2019 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class LTUser;
NS_ASSUME_NONNULL_BEGIN

typedef void (^loginUserBlock)(LTUser *loginUser);
@interface LTLoginManager : NSObject
+ (instancetype)sharedInstance;


/**
 注册乐推应用

 @param appId 从乐推平台申请的应用ID
 @param key 从乐推平台生成的应用key
 @param vc 当前界面所处的ViewController
 */
-(void)registLTAppID:(NSString *)appId appkey:(NSString *)key UIViewController:(UIViewController *)vc;

/**
 Facebook登录
 
 @param block 回调通知
 */
-(void)facebookLogin:(loginUserBlock)block;


/**
 获取登录结果回调
 
 @param application 当前应用
 @param url 回调的url
 @param options 包含回调应用的BundleIdentifier（比如“com.facebook.app”）
 @return 内部使用
 */
- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;


@property (nonatomic, strong) LTUser *currentUser;
@end

NS_ASSUME_NONNULL_END

//
//  LTPlatformManager.h
//  LTGameSDKCore
//
//  Created by ZBF on 2019/7/12.
//  Copyright © 2019 gnetop. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "LTPlatformDefine.h"
#import "LTUser.h"
typedef void (^loginUserBlock)(LTUser *loginUser);

@protocol LTPlatformManagerDelegate <NSObject>

@optional

- (void)signInWithType:(LTPlayformType)platformType
    fromViewController:(UIViewController *)viewController
              callback:(loginUserBlock)callback;
- (void)LTPlatformApplication:(UIApplication *)app openURL:(NSURL *)url ptions:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
- (void)userLogout;
@end

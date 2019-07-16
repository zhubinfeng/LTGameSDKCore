//
//  LTPlatformConfig.h
//  LTGameSDKCore
//
//  Created by ZBF on 2019/7/12.
//  Copyright © 2019 gnetop. All rights reserved.
//
#import "LTPlatformDefine.h"
@protocol LTPlatformConfig <NSObject>

@optional

- (void)setPlatform:(LTPlatformType)platformType
             appKey:(NSString *)appKey
              appID:(NSString *)appID
          appSecret:(NSString *)appSecret
        redirectURL:(NSString *)redirectURL
         URLSchemes:(NSString *)URLSchemes;

- (NSString *)appKeyWithPlatform:(LTPlatformType)platformType;

- (NSString *)appIDWithPlatform:(LTPlatformType)platformType;

- (NSString *)appSecretWithPlatform:(LTPlatformType)platformType;

- (NSString *)redirectURLWithPlatform:(LTPlatformType)platformType;

- (NSString *)URLSchemesWithPlatform:(LTPlatformType)platformType;
@end

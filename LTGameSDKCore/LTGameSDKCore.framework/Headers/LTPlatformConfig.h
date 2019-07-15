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

- (void)setPlatform:(LTPlayformType)platformType
             appKey:(NSString *)appKey
              appID:(NSString *)appID
          appSecret:(NSString *)appSecret
        redirectURL:(NSString *)redirectURL
         URLSchemes:(NSString *)URLSchemes;

- (NSString *)appKeyWithPlatform:(LTPlayformType)platformType;

- (NSString *)appIDWithPlatform:(LTPlayformType)platformType;

- (NSString *)appSecretWithPlatform:(LTPlayformType)platformType;

- (NSString *)redirectURLWithPlatform:(LTPlayformType)platformType;

- (NSString *)URLSchemesWithPlatform:(LTPlayformType)platformType;
@end

//
//  LTAFNetworking.h
//  LTGameSDKCore
//
//  Created by ZBF on 2019/7/4.
//  Copyright © 2019 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTAFNetworking : NSObject
+ (instancetype)sharedInstance;

- (void)loadGetOperationRequestURLString:(NSString *)URLString Parameters:(NSDictionary*)dic SuccessBlock:(void (^)(NSDictionary *jsonDict))successBlock FailureBlock:(void (^)(NSError *error))failureBlock ShowMessage:(BOOL)isShow;

- (void)loadPostOperationRequestURLString:(NSString *)URLString Parameters:(NSDictionary*)dic SuccessBlock:(void (^)(NSDictionary *jsonDict))successBlock FailureBlock:(void (^)(NSError *error))failureBlock ShowMessage:(BOOL)isShow;
@end

NS_ASSUME_NONNULL_END

//
//  LTPhoneManager.h
//  LTPlatformPhone
//
//  Created by ZBF on 2019/7/17.
//  Copyright © 2019 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>
@class LTUser;
NS_ASSUME_NONNULL_BEGIN

typedef void (^phoneLoginUserBlock)(LTUser *loginUser);
typedef void(^callbackBlock)(NSDictionary *resultInfo);
@interface LTPhoneManager : NSObject
+ (instancetype)sharedInstance;
-(void)sendPhoneCode:(callbackBlock)callbackBlock phoneNumber:(NSString *)phoneNum;
-(void)phoneRegist:(phoneLoginUserBlock)block withPhoneNumber:(NSString *)phoneNum withAuthCode:(NSString *)authCode withPassword:(NSString *)password;
-(void)phoneLogin:(phoneLoginUserBlock)block withPhoneNumber:(NSString *)phoneNum withPassword:(NSString *)password;
-(void)resetPassword:(callbackBlock)callbackBlock withPhoneNumber:(NSString *)phoneNum withAuthCode:(NSString *)authCode withPassword:(NSString *)password;
@end

NS_ASSUME_NONNULL_END

//
//  LTUserDefaultTool.h
//  LTGameSDKCore
//
//  Created by ZBF on 2019/7/3.
//  Copyright © 2019 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTUserDefaultTool : NSObject
+ (instancetype)sharedInstance;
//LT_APPID
- (NSString *)getLTAppID;
- (void)saveLTAppID:(NSString *)LTAppID;
//LT_APPKEY
- (NSString *)getLTAppKey;
- (void)saveLTAppKey:(NSString *)LTAppKey;
//LT_UID
- (NSString *)getLTUID;
- (void)saveLTUID:(NSString *)LTUID;
//api_token
- (NSString *)getApiToken;
- (void)saveApiToken:(NSString *)apiToken;
//UserType
- (NSString *)getUserType;
- (void)saveUserType:(NSString *)userType;
//lt_uid_token
- (NSString *)getLTUidToken;
- (void)saveLTUidToken:(NSString *)LTUidToken;
//用户是否同意用户条款和隐私协议
- (NSString *)getAgreementFlag;
- (void)saveAgreementFlag:(NSString *)agreementFlag;
//设置用户条款和隐私协议的地址
- (NSString *)getAgreementLink;
- (void)saveAgreementLink:(NSString *)agreementLink;
- (NSString *)getPrivacyLink;
- (void)savePrivacyLink:(NSString *)privacyLink;
//游客本地生成的ID
- (NSString *)getLocalTouristID;
- (void)saveLocalTouristID:(NSString *)LocalTouristID;
- (NSString *)getLTServerBaseURL;

- (void)saveLTServerBaseURL:(NSString *)LTAppKey;
//清空用户数据
- (void)removeUserInfo;
@end

NS_ASSUME_NONNULL_END

//
//  LTPlatformDefine.h
//  LTGameSDKCore
//
//  Created by ZBF on 2019/7/12.
//  Copyright © 2019 gnetop. All rights reserved.
//

#ifndef LTPlatformDefine_h
#define LTPlatformDefine_h

#define ValueOrEmpty(value) ((value) ? value : @"")

typedef NS_ENUM(NSUInteger, LTPlatformType) {
    LTPlatformFacebook = 101,
    LTPlatformGoogle,
    LTPlatformQQ,
    LTPlatformWeixin,
};

#endif /* LTPlatformDefine_h */

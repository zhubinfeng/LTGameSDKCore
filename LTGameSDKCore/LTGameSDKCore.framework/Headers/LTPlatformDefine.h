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

typedef NS_ENUM(NSUInteger, LTPlayformType) {
    LTPlatformFacebook = 101,
    LTPlatformGoogle,
};

#endif /* LTPlatformDefine_h */
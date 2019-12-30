//
//  LTGameUserModel.h
//  LTGameSDKCore
//
//  Created by ZBF on 2019/12/30.
//  Copyright © 2019 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTGameUserModel : NSObject
//游戏内用户ID
@property (nonatomic,copy) NSString *gameUserID;
//游戏内昵称
@property (nonatomic,copy) NSString *gameUserName;
//游戏内用户性别(1：男 | 0：女)
@property (nonatomic,copy) NSString *gameUserSex;
//乐推用户ID
@property (nonatomic,copy) NSString *LTUserID;
@end

NS_ASSUME_NONNULL_END

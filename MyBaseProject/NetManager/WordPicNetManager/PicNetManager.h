//
//  PicNetManager.h
//  MyBaseProject
//
//  Created by zsl on 15/12/6.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import "BaseNetManager.h"
#import "PicModel.h"

@interface PicNetManager : BaseNetManager

+ (id)getPicWithSetID:(NSInteger)setID kCompletionHandler;

@end

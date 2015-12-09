//
//  WordNetManager.h
//  MyBaseProject
//
//  Created by zsl on 15/12/6.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import "BaseNetManager.h"
#import "WordModel.h"

@interface WordNetManager : BaseNetManager

+ (id)getWordWithPage:(NSInteger)page kCompletionHandler;

@end

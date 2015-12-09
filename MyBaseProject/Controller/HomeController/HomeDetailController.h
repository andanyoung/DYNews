//
//  HomeDetailController.h
//  MyBaseProject
//
//  Created by zsl on 15/12/6.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeDetailController : UIViewController

/** 初始化的时候把ID传进来 */
- (instancetype)initWithID:(NSInteger)ID;
@property (nonatomic) NSInteger ID;

@end

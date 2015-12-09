//
//  WordDetailController.h
//  MyBaseProject
//
//  Created by zsl on 15/12/6.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WordDetailController : UIViewController

/** 初始化的时候把内容传进来 */
- (instancetype)initWithContent:(NSString *)content;
@property (strong, nonatomic) NSString *content;

@end

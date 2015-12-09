//
//  PicDetailController.h
//  MyBaseProject
//
//  Created by zsl on 15/12/6.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PicViewModel.h"

@interface PicDetailController : UIViewController

- (instancetype)initWithPicModel:(PicModel *)model;
@property (strong, nonatomic) PicModel *model;

@end

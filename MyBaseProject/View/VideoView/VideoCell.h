//
//  VideoCell.h
//  MyBaseProject
//
//  Created by zsl on 15/12/6.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoCell : UITableViewCell

@property (strong, nonatomic) MyImageView *iconIV;
@property (strong, nonatomic) UILabel *titleLB;
@property (strong, nonatomic) UILabel *subtitleLB;
@property (strong, nonatomic) UILabel *timeLB;

@end

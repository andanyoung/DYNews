//
//  VideoViewModel.h
//  MyBaseProject
//
//  Created by zsl on 15/12/6.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import "BaseViewModel.h"
#import "VideoNetManager.h"

@interface VideoViewModel : BaseViewModel

@property (nonatomic) NSInteger rowNum;

- (NSURL *)iconURLForRow:(NSInteger)row;
- (NSString *)titleForRow:(NSInteger)row;
- (NSString *)subtitleForRow:(NSInteger)row;
- (NSString *)timeForRow:(NSInteger)row;

- (NSURL *)videoURLForRow:(NSInteger)row;

@property (nonatomic) NSInteger page;

@end

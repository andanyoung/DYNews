//
//  WordViewModel.h
//  MyBaseProject
//
//  Created by zsl on 15/12/6.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import "BaseViewModel.h"
#import "WordNetManager.h"

@interface WordViewModel : BaseViewModel

@property (nonatomic) NSInteger rowNum;

- (NSString *)contentForRow:(NSInteger)row;
- (NSString *)zanNumForRow:(NSInteger)row;
- (NSString *)dateForRow:(NSInteger)row;

@property (nonatomic) NSInteger page;

@end

//
//  AppDelegate+DDLog.m
//  MyBaseProject
//
//  Created by zsl on 15/12/3.
//  Copyright © 2015年 zsl. All rights reserved.
//

#import "AppDelegate+DDLog.h"

@implementation AppDelegate (DDLog)

- (void)initializeWithApplication:(UIApplication *)application {
    [DDLog addLogger:[DDASLLogger sharedInstance]];
    [DDLog addLogger:[DDTTYLogger sharedInstance]];
    [[DDTTYLogger sharedInstance] setColorsEnabled:YES];
}

@end

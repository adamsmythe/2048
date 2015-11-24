//  Copyright (c) 2015 Doe Pics Hit, Inc. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>

typedef NSString*(^BBUserIdentifierCallback)();

@interface BuddyBuildSDK : NSObject
+ (void)setup:(id<UIApplicationDelegate>)bbAppDelegate;
+ (void)setup;

+ (void)setUserIdentifierCallback:(BBUserIdentifierCallback)callback;

@end

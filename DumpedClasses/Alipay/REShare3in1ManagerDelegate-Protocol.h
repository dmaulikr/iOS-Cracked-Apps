//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REShare3In1Manager, UIViewController;

@protocol REShare3in1ManagerDelegate <NSObject>
- (void)shareManagerDidCompletion:(REShare3In1Manager *)arg1 contactVC:(UIViewController *)arg2 sharedContact:(id <APCommonItemProtocol>)arg3 completionType:(unsigned long long)arg4;

@optional
- (void)shareManagerDidBack:(REShare3In1Manager *)arg1 contactVC:(UIViewController *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBAppStatusMonitorDelegate.h"

@class NSString, TBAppStatusMonitor;

@interface TBAppStatusMonitorOnline : NSObject <TBAppStatusMonitorDelegate>
{
    _Bool _isReleaseVersion;
    _Bool _isEnableMsgSendCost;
    _Bool _isEnableLiveInstance;
    TBAppStatusMonitor *_appStatusMonitor;
}

@property(nonatomic) _Bool isEnableLiveInstance; // @synthesize isEnableLiveInstance=_isEnableLiveInstance;
@property(nonatomic) _Bool isEnableMsgSendCost; // @synthesize isEnableMsgSendCost=_isEnableMsgSendCost;
@property(nonatomic) _Bool isReleaseVersion; // @synthesize isReleaseVersion=_isReleaseVersion;
@property(nonatomic) __weak TBAppStatusMonitor *appStatusMonitor; // @synthesize appStatusMonitor=_appStatusMonitor;
- (void).cxx_destruct;
- (void)onGetAppStatusMonitorLiveInstanceStatus:(id)arg1 andCurrentPage:(id)arg2;
- (void)onGetAppStatusMonitorMsgSendCostStatus:(id)arg1 andCurrentPage:(id)arg2;
- (unsigned long long)getMonitorTypes;
- (_Bool)checkIsEnableAppMonitor:(id)arg1;
- (void)makeStanmpForMonitor:(id)arg1 pageChangeType:(long long)arg2;
- (void)stopStanmpForMonitor:(id)arg1;
- (void)makeStanmpForMonitorDidPopVC:(id)arg1;
- (void)makeStanmpForMonitorPopVC:(id)arg1;
- (void)makeStanmpForMonitorTabVC:(id)arg1;
- (void)makeStanmpForMonitorPushVC:(id)arg1;
- (_Bool)isOpenMonitorOnline;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

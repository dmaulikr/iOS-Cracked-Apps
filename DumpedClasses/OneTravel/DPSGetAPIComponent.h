//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DPSAPIRequestComponent.h"

@class NSString;

@interface DPSGetAPIComponent : NSObject <DPSAPIRequestComponent>
{
}

- (void)requestWithAPIPath:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4 autoRetry:(unsigned long long)arg5 retryInterval:(unsigned long long)arg6 timeOut:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

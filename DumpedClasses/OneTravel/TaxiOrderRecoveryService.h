//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TaxiOrderRecoveryService : NSObject
{
}

+ (void)responseRecoverAlert:(id)arg1 isClickConfirm:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)loadOrderDetailData:(id)arg1 orderRecoverType:(long long)arg2 showHUDView:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)getRecoveryAlertInfoByType:(long long)arg1 contentFromServer:(id)arg2;

@end

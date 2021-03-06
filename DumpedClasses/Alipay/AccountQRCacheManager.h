//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountQRCache, NSMutableDictionary, NSString;

@interface AccountQRCacheManager : NSObject
{
    NSString *_userId;
    NSMutableDictionary *_rpcFinishedTags;
    AccountQRCache *_qrInfoData;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AccountQRCache *qrInfoData; // @synthesize qrInfoData=_qrInfoData;
@property(retain, nonatomic) NSMutableDictionary *rpcFinishedTags; // @synthesize rpcFinishedTags=_rpcFinishedTags;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)qrImageUrl;
- (_Bool)hasMoreQRStyle;
- (void)decreaseQRStyleIndex;
- (void)increaseQRStyleIndex;
- (_Bool)isAllRPCFinished;
- (void)doCallbackWithSuccessHandler:(CDUnknownBlockType)arg1 failHandler:(CDUnknownBlockType)arg2;
- (void)checkStautsAndHandleWithSuccessHandler:(CDUnknownBlockType)arg1 failHandler:(CDUnknownBlockType)arg2;
- (void)updateStyleWithStyleList:(id)arg1;
- (void)fetchQRInfoOnSuccessHandler:(CDUnknownBlockType)arg1 failHandler:(CDUnknownBlockType)arg2;
- (void)saveQRInfoWithImageData:(id)arg1;
- (void)saveQRInfoData;
- (id)localCache;
- (id)currentUserId;
- (id)init;

@end


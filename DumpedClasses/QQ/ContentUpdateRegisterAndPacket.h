//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableArray, NSString;

@interface ContentUpdateRegisterAndPacket : NSObject <IEngineDispatchDelegate>
{
    _Bool _isSingleModeOn;
    _Bool _isLoading;
    int _singleModeAppId;
    int _xo;
    NSMutableArray *_appInfoArray;
    NSMutableArray *_tmpInfoArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *tmpInfoArray; // @synthesize tmpInfoArray=_tmpInfoArray;
@property(retain, nonatomic) NSMutableArray *appInfoArray; // @synthesize appInfoArray=_appInfoArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onLogOut;
- (void)notifyError:(id)arg1;
- (void)responseContentUpdate:(struct CPBMessageDecoder *)arg1 ret:(int)arg2;
- (void)handleFileUpdate:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)requestContentUpdate:(int)arg1 singleMode:(_Bool)arg2;
- (void)requestContentUpdate:(int)arg1;
- (void)requestContentUpdate;
- (_Bool)hasVersion:(int)arg1 name:(id)arg2;
- (id)getExtend:(int)arg1 name:(id)arg2;
- (unsigned int)getNewVersion:(int)arg1 name:(id)arg2;
- (unsigned int)getVersion:(int)arg1 name:(id)arg2;
- (_Bool)needShowRedFlag:(int)arg1 name:(id)arg2;
- (_Bool)needUpdateByAppid:(int)arg1 name:(id)arg2;
- (id)findContentUpdateInfo:(int)arg1 name:(id)arg2;
- (_Bool)loadUpdateInfoFromDB:(int)arg1 uin:(long long)arg2;
- (_Bool)isItemRenew:(int)arg1 name:(id)arg2;
- (_Bool)updateContentUpdateVersion:(int)arg1 name:(id)arg2;
- (id)getContentUpdateInfo:(int)arg1 name:(id)arg2;
- (void)packContentByAppid:(int)arg1 name:(id)arg2 version:(unsigned int)arg3 forAllLoginUser:(_Bool)arg4;
- (void)packContentByAppid:(int)arg1 name:(id)arg2 forAllLoginUser:(_Bool)arg3;
- (void)clearTmpAppInfos;
- (void)clearAppInfos;
- (void)registerForSynInfoServiceOnLogin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isLoading; // @dynamic isLoading;
@property(nonatomic) _Bool isSingleModeOn; // @dynamic isSingleModeOn;
@property(nonatomic) int singleModeAppId; // @dynamic singleModeAppId;
@property(readonly) Class superclass;

@end

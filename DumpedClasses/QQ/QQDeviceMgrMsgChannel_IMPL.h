//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPbMsgSenderBase.h"

#import "IPushTransMsgHandleDelegate.h"

@class NSString;

@interface QQDeviceMgrMsgChannel_IMPL : QQPbMsgSenderBase <IPushTransMsgHandleDelegate>
{
}

+ (id)getInstance;
- (void)SetC2CTypeRelatedInfoToUserInfoOfSendingModel:(id)arg1 FromPbSendMsgReq:(struct PbSendMsgReq *)arg2;
- (void)SetC2CTypeRelatedInfoToPbSendMsgReq:(struct PbSendMsgReq *)arg1 ToUin:(unsigned long long)arg2;
- (id)SendingModelToUin:(long long)arg1 TimeStamp:(int)arg2 MsgId:(int)arg3 pkgNum:(BOOL)arg4 divSeq:(short)arg5;
- (id)LicenceNeedForSend;
- (id)getSinkArray:(id)arg1 CreateNoExist:(_Bool)arg2;
- (void)notifyService:(id)arg1 CCMsg:(id)arg2;
- (void)handle0x211Msg:(struct PbMsgInfo *)arg1 subType:(unsigned int)arg2;
- (void)handlePushTransMsg:(struct PbMsgInfo *)arg1 withType:(unsigned int)arg2 subType:(unsigned int)arg3 playSound:(_Bool *)arg4;
- (void)unregService:(id)arg1 CCMsgHandleDelegate:(id)arg2;
- (void)regService:(id)arg1 CCMsgHandleDelegate:(id)arg2;
- (void)dealloc;
- (id)init;
- (int)sendPbMsg:(id)arg1;
- (int)sendDeviceMgrCCMsgToPC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

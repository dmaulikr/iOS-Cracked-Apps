//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NVMUserService : NSObject
{
}

+ (void)requestUserExtraInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (void)uploadAvatorWithImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)postUserProfileDidChangeNotification;
+ (void)snsUnbind:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)snsTaobaoBindWithAuthcode:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)snsBind:(unsigned long long)arg1 userprofile:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)resetPassword:(id)arg1 withOldPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)resetPassword:(id)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setPassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendNotification;
+ (void)changeUserName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setQuota:(long long)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)sendSetQuotaCodeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)sendResetPasswordVoiceCodeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)sendResetPasswordCodeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)checkRegistStatusForMobile:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)readAllMessagesWithTimestamp:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)messagesWithLastUpdatedTime:(double)arg1 cursor:(id)arg2 pageIndex:(long long)arg3 pageSize:(long long)arg4 completion:(CDUnknownBlockType)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface PrivateMessageReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizType; // @dynamic bizType;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(readonly) _Bool hasBizType; // @dynamic hasBizType;
@property(readonly) _Bool hasClientMsgId; // @dynamic hasClientMsgId;
@property(readonly) _Bool hasReceiverId; // @dynamic hasReceiverId;
@property(readonly) _Bool hasTemplateCode; // @dynamic hasTemplateCode;
@property(readonly) _Bool hasTemplateData; // @dynamic hasTemplateData;
@property(retain, nonatomic) NSString *receiverId; // @dynamic receiverId;
@property(retain, nonatomic) NSString *templateCode; // @dynamic templateCode;
@property(retain, nonatomic) NSString *templateData; // @dynamic templateData;

@end

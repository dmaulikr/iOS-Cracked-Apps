//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface LocalDnsRes : NSObject
{
    _Bool _isHttpDns;
    NSMutableArray *_ips;
    long long _createTime;
}

@property(nonatomic) _Bool isHttpDns; // @synthesize isHttpDns=_isHttpDns;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSMutableArray *ips; // @synthesize ips=_ips;
- (void).cxx_destruct;

@end

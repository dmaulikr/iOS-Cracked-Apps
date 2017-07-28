//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface PingppDataCollection : NSObject
{
    NSString *_system;
    NSString *_systemVersion;
    NSString *_sdkVersion;
    NSString *_deviceId;
    NSString *_ip;
    NSString *_appId;
    NSDictionary *_gps;
    NSMutableDictionary *_extra;
    NSNumber *_sdkType;
    NSNumber *_enterTime;
    NSNumber *_quitTime;
    NSMutableDictionary *_channels;
    NSString *_firstChannel;
    NSString *_lastChannel;
    NSMutableArray *_chIds;
    NSMutableArray *_nocard;
}

+ (id)getUniqueId;
@property(copy, nonatomic) NSMutableArray *nocard; // @synthesize nocard=_nocard;
@property(copy, nonatomic) NSMutableArray *chIds; // @synthesize chIds=_chIds;
@property(copy, nonatomic) NSString *lastChannel; // @synthesize lastChannel=_lastChannel;
@property(copy, nonatomic) NSString *firstChannel; // @synthesize firstChannel=_firstChannel;
@property(copy, nonatomic) NSMutableDictionary *channels; // @synthesize channels=_channels;
@property(copy, nonatomic) NSNumber *quitTime; // @synthesize quitTime=_quitTime;
@property(copy, nonatomic) NSNumber *enterTime; // @synthesize enterTime=_enterTime;
@property(copy, nonatomic) NSNumber *sdkType; // @synthesize sdkType=_sdkType;
@property(copy, nonatomic) NSMutableDictionary *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSDictionary *gps; // @synthesize gps=_gps;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *system; // @synthesize system=_system;
- (void).cxx_destruct;
- (void)setSdkTypeInt:(unsigned long long)arg1;
- (void)sendToServer;
- (void)addNocardAction:(id)arg1;
- (id)getStringToBeSigned;
- (id)orderedKeys;
- (void)setQuitTimeNow;
- (id)camelCaseToUnderscore:(id)arg1;
- (id)getPropertyList:(_Bool)arg1;
- (id)getPropertyList;
- (id)toJSONData;
- (id)toJSONString;
- (_Bool)getProperty:(id *)arg1 ByName:(id)arg2;
- (id)toDictionary;
- (void)addCharge:(id)arg1;
- (void)increaseChannel:(id)arg1;
- (void)addChargeId:(id)arg1;
- (id)init;

@end

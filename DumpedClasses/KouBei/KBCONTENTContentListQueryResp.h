//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTApiResult.h"

@class NSDictionary, NSString;

@interface KBCONTENTContentListQueryResp : KBCONTENTApiResult
{
    NSDictionary *_data;
    NSString *_templateType;
}

+ (Class)dataElementClass;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end


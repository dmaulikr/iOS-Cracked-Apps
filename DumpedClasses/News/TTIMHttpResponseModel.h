//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary, NSNumber;

@interface TTIMHttpResponseModel : JSONModel
{
    NSDictionary *_result;
    NSNumber *_cmd;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber *cmd; // @synthesize cmd=_cmd;
@property(copy, nonatomic) NSDictionary *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

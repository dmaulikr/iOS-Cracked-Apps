//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBSNSCommentExtParam : NSObject
{
    NSString *_targetCover;
    NSString *_targetTitle;
    NSString *_targetUrl;
}

@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString *targetTitle; // @synthesize targetTitle=_targetTitle;
@property(retain, nonatomic) NSString *targetCover; // @synthesize targetCover=_targetCover;
- (void).cxx_destruct;
- (id)initWithtargetCover:(id)arg1 targetTitle:(id)arg2 targetUrl:(id)arg3;

@end

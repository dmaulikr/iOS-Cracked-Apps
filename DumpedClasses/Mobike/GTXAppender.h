//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTXErrorHandler, GTXLayout, NSString;

@interface GTXAppender : NSObject
{
    _Bool _ignoreError;
    NSString *_loggerName;
    GTXLayout *_lauout;
    GTXErrorHandler *_errorHandler;
}

@property(retain, nonatomic) GTXErrorHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) _Bool ignoreError; // @synthesize ignoreError=_ignoreError;
@property(retain, nonatomic) GTXLayout *lauout; // @synthesize lauout=_lauout;
@property(retain, nonatomic) NSString *loggerName; // @synthesize loggerName=_loggerName;
- (void).cxx_destruct;
- (_Bool)isStoped;
- (_Bool)isStarted;
- (void)stop;
- (void)start;
- (_Bool)writeable;
- (_Bool)writing;
- (int)fragment;
- (void)setHandler:(id)arg1;
- (id)layout;
- (id)hander;
- (void)append:(id)arg1;
- (id)initWithLoggerName:(id)arg1 layout:(id)arg2 ignoreError:(_Bool)arg3;

@end


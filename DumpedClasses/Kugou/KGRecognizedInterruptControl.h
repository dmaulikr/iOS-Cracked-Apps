//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGRecognizedInterruptControl : NSObject
{
    _Bool _isInterruption;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedSingleton;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)beginInterruption;
- (void)interruptionNotifyCallback:(id)arg1;
- (void)initAllData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

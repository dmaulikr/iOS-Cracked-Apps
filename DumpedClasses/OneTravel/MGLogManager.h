//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSString;

@interface MGLogManager : NSObject
{
    NSString *_logBasePath;
    NSFileManager *_fileManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSString *logBasePath; // @synthesize logBasePath=_logBasePath;
- (void).cxx_destruct;
- (void)addLog:(id)arg1 fileName:(id)arg2;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "Singleton.h"

@class NSString;

@interface TTFastCoding : NSObject <NSCoding, Singleton>
{
    NSString *_etag;
}

+ (void)deleteAllInDirectory:(id)arg1;
+ (void)deleteFileWithFileName:(id)arg1;
+ (id)readWithFileName:(id)arg1;
+ (int)customDirectory;
+ (id)readWithFileNameNoInit:(id)arg1;
+ (id)classPathName:(id)arg1;
+ (void)deleteFile;
+ (id)read;
+ (id)readNoInit;
+ (id)fileName;
+ (id)getInstance;
+ (void)cleanExpirationFile;
+ (void)registerAutoCleanDirectory:(id)arg1;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void).cxx_destruct;
- (void)saveWithFileName:(id)arg1;
- (id)classPathName:(id)arg1;
- (void)save;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

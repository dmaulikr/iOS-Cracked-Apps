//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (TTIMExtension)
+ (id)ttimEncryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2 error:(id *)arg3;
+ (id)ttimStripPublicKeyHeader:(id)arg1;
+ (id)ttimDataWithBase64EncodedString:(id)arg1;
+ (struct __SecKey *)ttimAddPublicKey:(id)arg1;
+ (id)ttimEncryptData:(id)arg1 publicKey:(id)arg2 error:(id *)arg3;
- (id)ttimBase64EncodedString;
@end

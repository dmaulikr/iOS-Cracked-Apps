//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ONERSA : NSObject
{
    struct __SecKey *_publicRef;
    struct __SecKey *_privateRef;
}

+ (id)sharedInstance;
@property(nonatomic) struct __SecKey *privateRef; // @synthesize privateRef=_privateRef;
@property(nonatomic) struct __SecKey *publicRef; // @synthesize publicRef=_publicRef;
- (id)publicDecrypt:(id)arg1;
- (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
- (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
- (void)setPublicKeyName:(id)arg1;
- (void)setPublicKeyValue:(id)arg1;
- (id)stripPublicKeyHeader:(id)arg1;
- (id)stripPrivateKeyHeader:(id)arg1;
- (id)keyPath:(id)arg1;

@end

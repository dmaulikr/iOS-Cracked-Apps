//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CacheMigration : NSObject
{
}

+ (id)sharedInstance;
- (unsigned long long)cropModeFromInfo:(id)arg1;
- (unsigned long long)typeFromInfo:(id)arg1;
- (_Bool)initOptions:(id)arg1 key:(id *)arg2 aliasKey:(id *)arg3 withItem:(id)arg4;
- (void)finishMigration;
- (void)migrateItem:(id)arg1;
- (id)getMigrateItemsWithBusinesses:(id)arg1 age:(double)arg2 limit:(unsigned long long)arg3;
- (void)migrateBusinesses:(id)arg1 age:(double)arg2 limit:(unsigned long long)arg3;
- (void)migrate;

@end

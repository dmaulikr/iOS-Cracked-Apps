//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TTSectionViewEntity;

@interface TTSectionEntity : NSObject
{
    TTSectionViewEntity *_sectionData;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) TTSectionViewEntity *sectionData; // @synthesize sectionData=_sectionData;
- (void).cxx_destruct;

@end

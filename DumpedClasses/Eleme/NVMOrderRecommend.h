//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray;

@interface NVMOrderRecommend : NVMModel
{
    NSArray *_modelItems;
}

+ (id)modelItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *modelItems; // @synthesize modelItems=_modelItems;
- (void).cxx_destruct;
- (id)recommendItems;

@end

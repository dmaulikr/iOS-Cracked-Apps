//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSArray, NSValue, XYPHExploreCountry;

@interface XYPHExploreCountryArea : XYRKModel
{
    NSArray *_area;
    XYPHExploreCountry *_country;
}

+ (id)areaJSONTransformer;
+ (id)countryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) XYPHExploreCountry *country; // @synthesize country=_country;
@property(retain, nonatomic) NSArray *area; // @synthesize area=_area;
- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *scrollViewOffset;

@end

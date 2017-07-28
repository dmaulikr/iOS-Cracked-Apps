//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapLocationReGeocode, NSNumber, NSString;

@interface FMLocationDO : NSObject
{
    NSString *_lat;
    NSString *_lng;
    NSString *_province;
    NSString *_city;
    NSString *_area;
    NSNumber *_locationId;
    NSString *_acc;
    AMapLocationReGeocode *_regeocode;
}

@property(retain, nonatomic) AMapLocationReGeocode *regeocode; // @synthesize regeocode=_regeocode;
@property(copy, nonatomic) NSString *acc; // @synthesize acc=_acc;
@property(retain, nonatomic) NSNumber *locationId; // @synthesize locationId=_locationId;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSString *lat; // @synthesize lat=_lat;
- (void).cxx_destruct;
- (_Bool)isChinaLocation;
@property _Bool isFiltable;
@property _Bool isSelected;
- (id)modelValue;
- (id)modelTitle;
- (id)toFilterLocation;

@end

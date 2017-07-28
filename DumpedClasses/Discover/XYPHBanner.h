//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHBanner : XYRKModel
{
    NSString *_bannerId;
    NSString *_name;
    NSString *_icon;
    NSString *_image;
    NSString *_link;
    NSString *_time;
    NSString *_date;
    NSString *_type;
    long long _read;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long read; // @synthesize read=_read;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bannerId; // @synthesize bannerId=_bannerId;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString<Optional>;

@interface DCRouteConfigModel : TRBaseModel
{
    NSString<Optional> *_title;
    NSString<Optional> *_top_tips;
    NSString<Optional> *_route_max_num;
    NSString<Optional> *_route_max_tips;
    NSString<Optional> *_no_route_title;
    NSString<Optional> *_add_title;
}

@property(copy, nonatomic) NSString<Optional> *add_title; // @synthesize add_title=_add_title;
@property(copy, nonatomic) NSString<Optional> *no_route_title; // @synthesize no_route_title=_no_route_title;
@property(copy, nonatomic) NSString<Optional> *route_max_tips; // @synthesize route_max_tips=_route_max_tips;
@property(copy, nonatomic) NSString<Optional> *route_max_num; // @synthesize route_max_num=_route_max_num;
@property(copy, nonatomic) NSString<Optional> *top_tips; // @synthesize top_tips=_top_tips;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

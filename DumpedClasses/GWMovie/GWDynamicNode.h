//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class GWPicture, NSString;

@interface GWDynamicNode : GWObject
{
    GWPicture *_img;
    NSString *_text;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) GWPicture *img; // @synthesize img=_img;
- (void).cxx_destruct;

@end

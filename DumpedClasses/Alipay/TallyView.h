//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary;

@interface TallyView : UIView
{
    NSDictionary *data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onLayout;
- (void)configData;
- (void)releaseUI;
- (void)initUI;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KtvProgress, UILabel;

@interface KtvRecordRoomStatusBar : UIView
{
    double _totalTime;
    double _currentTime;
    UILabel *_totalTimeShowLb;
    UILabel *_curentTimeShowLb;
    UILabel *_tipLb;
    UIView *_statusDotView;
    KtvProgress *_progress;
}

@property(retain, nonatomic) KtvProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIView *statusDotView; // @synthesize statusDotView=_statusDotView;
@property(retain, nonatomic) UILabel *tipLb; // @synthesize tipLb=_tipLb;
@property(retain, nonatomic) UILabel *curentTimeShowLb; // @synthesize curentTimeShowLb=_curentTimeShowLb;
@property(retain, nonatomic) UILabel *totalTimeShowLb; // @synthesize totalTimeShowLb=_totalTimeShowLb;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
- (void).cxx_destruct;
- (id)timeStringFromFloatValue:(double)arg1;
- (void)setStatusForStopRecord;
- (void)setStatusForStartRecord;
- (void)configureWithBounds:(struct CGRect)arg1;
- (void)initlizaSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

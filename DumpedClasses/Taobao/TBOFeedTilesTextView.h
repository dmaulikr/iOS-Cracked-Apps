//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOFeedTilesView.h"

@class TBOAttributedLabel;

@interface TBOFeedTilesTextView : TBOFeedTilesView
{
    TBOAttributedLabel *_textTile;
}

@property(retain, nonatomic) TBOAttributedLabel *textTile; // @synthesize textTile=_textTile;
- (void).cxx_destruct;
- (struct CGSize)getViewSize;
- (void)refreshDataForView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


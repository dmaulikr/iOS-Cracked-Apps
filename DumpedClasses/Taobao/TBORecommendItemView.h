//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TBORecommendItemView : UIView
{
    UIImageView *_itemImage;
    UILabel *_lb;
    UIImageView *_indicatorImage;
}

@property(retain, nonatomic) UIImageView *indicatorImage; // @synthesize indicatorImage=_indicatorImage;
@property(retain, nonatomic) UILabel *lb; // @synthesize lb=_lb;
@property(retain, nonatomic) UIImageView *itemImage; // @synthesize itemImage=_itemImage;
- (void).cxx_destruct;
- (void)chooseRecommendItem:(_Bool)arg1;
- (void)applyStytle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

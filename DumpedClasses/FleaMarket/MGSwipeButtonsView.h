//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MGSwipeTableCell, NSArray, UIColor;

@interface MGSwipeButtonsView : UIView
{
    NSArray *_buttons;
    UIView *_container;
    _Bool _fromLeft;
    UIView *_expandedButton;
    UIView *_expandedButtonAnimated;
    UIView *_expansionBackground;
    UIView *_expansionBackgroundAnimated;
    struct CGRect _expandedButtonBoundsCopy;
    long long _expansionLayout;
    double _expansionOffset;
    _Bool _autoHideExpansion;
    MGSwipeTableCell *_cell;
    UIColor *_backgroundColorCopy;
}

@property(retain, nonatomic) UIColor *backgroundColorCopy; // @synthesize backgroundColorCopy=_backgroundColorCopy;
@property(nonatomic) __weak MGSwipeTableCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)transition:(long long)arg1 percent:(double)arg2;
- (void)transition3D:(double)arg1;
- (void)transtitionFloatBorder:(double)arg1;
- (void)transitionClip:(double)arg1;
- (void)transitionDrag:(double)arg1;
- (void)transitionStatic:(double)arg1;
- (void)mgButtonClicked:(id)arg1;
- (_Bool)handleClick:(id)arg1 fromExpansion:(_Bool)arg2;
- (id)getExpandedButton;
- (void)endExpansionAnimated:(_Bool)arg1;
- (void)expandToOffset:(double)arg1 settings:(id)arg2;
- (struct CGRect)expansionBackgroundRect:(id)arg1;
- (void)layoutSubviews;
- (void)layoutExpansion:(double)arg1;
- (void)resetButtons;
- (void)dealloc;
- (id)initWithButtons:(id)arg1 direction:(long long)arg2 differentWidth:(_Bool)arg3;

@end

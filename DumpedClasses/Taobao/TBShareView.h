//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBShareContactView, TBSharePromotionView, TBShareTargetListView, TBShareViewModel, UIWindow;

@interface TBShareView : UIView
{
    _Bool _animating;
    UIWindow *_keyWindow;
    UIView *_containerView;
    TBSharePromotionView *_promotionView;
    TBShareTargetListView *_targetListView0;
    TBShareTargetListView *_targetListView1;
    TBShareContactView *_contactView;
    TBShareViewModel *_viewModel;
}

@property(retain, nonatomic) TBShareViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TBShareContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) TBShareTargetListView *targetListView1; // @synthesize targetListView1=_targetListView1;
@property(retain, nonatomic) TBShareTargetListView *targetListView0; // @synthesize targetListView0=_targetListView0;
@property(retain, nonatomic) TBSharePromotionView *promotionView; // @synthesize promotionView=_promotionView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismiss:(_Bool)arg1 finished:(CDUnknownBlockType)arg2;
- (void)dismiss:(_Bool)arg1;
- (void)show;
- (void)setupPromotionView;
- (void)didCancelAction;
- (void)tap:(id)arg1;
- (void)setupContactsWithFrame:(struct CGRect)arg1;
- (id)initWithViewModel:(id)arg1;

@end

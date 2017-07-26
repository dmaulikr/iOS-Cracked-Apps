//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPFullScreenView, CDPSpaceView, NSString, NSTimer, UIViewController;

@interface PromotionViewManager : NSObject
{
    _Bool _isAnimating;
    _Bool _needCheckAndShowPromotion;
    _Bool _isFloatTopAnimating;
    _Bool _needCheckAndShowFloatTopView;
    _Bool _showedTopViewCanRemove;
    _Bool _showedFloatTopViewCanRemove;
    NSString *_lastViewControllerName;
    CDPSpaceView *_needDismissTopView;
    NSTimer *_countDownTimer;
    CDPSpaceView *_needDismissFloatTopView;
    CDPSpaceView *_showedTopView;
    UIViewController *_showedTopViewBelongToViewController;
    CDPSpaceView *_showedFloatTopView;
    CDPFullScreenView *_fullScreenView;
    NSString *_currentViewControllerName;
    NSString *_currentAppId;
    NSString *_currentH5ViewId;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *currentH5ViewId; // @synthesize currentH5ViewId=_currentH5ViewId;
@property(retain, nonatomic) NSString *currentAppId; // @synthesize currentAppId=_currentAppId;
@property(retain, nonatomic) NSString *currentViewControllerName; // @synthesize currentViewControllerName=_currentViewControllerName;
@property(retain, nonatomic) CDPFullScreenView *fullScreenView; // @synthesize fullScreenView=_fullScreenView;
@property(nonatomic) _Bool showedFloatTopViewCanRemove; // @synthesize showedFloatTopViewCanRemove=_showedFloatTopViewCanRemove;
@property(retain, nonatomic) CDPSpaceView *showedFloatTopView; // @synthesize showedFloatTopView=_showedFloatTopView;
@property(retain, nonatomic) UIViewController *showedTopViewBelongToViewController; // @synthesize showedTopViewBelongToViewController=_showedTopViewBelongToViewController;
@property(nonatomic) _Bool showedTopViewCanRemove; // @synthesize showedTopViewCanRemove=_showedTopViewCanRemove;
@property(retain, nonatomic) CDPSpaceView *showedTopView; // @synthesize showedTopView=_showedTopView;
@property(nonatomic) _Bool needCheckAndShowFloatTopView; // @synthesize needCheckAndShowFloatTopView=_needCheckAndShowFloatTopView;
@property(retain, nonatomic) CDPSpaceView *needDismissFloatTopView; // @synthesize needDismissFloatTopView=_needDismissFloatTopView;
@property(nonatomic) _Bool isFloatTopAnimating; // @synthesize isFloatTopAnimating=_isFloatTopAnimating;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) CDPSpaceView *needDismissTopView; // @synthesize needDismissTopView=_needDismissTopView;
@property(nonatomic) _Bool needCheckAndShowPromotion; // @synthesize needCheckAndShowPromotion=_needCheckAndShowPromotion;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) NSString *lastViewControllerName; // @synthesize lastViewControllerName=_lastViewControllerName;
- (void).cxx_destruct;
- (_Bool)isH5WebView:(id)arg1;
- (id)h5ViewId:(id)arg1;
- (_Bool)isNeedShowFloatTopView:(id)arg1 viewController:(id)arg2;
- (void)bringFloatTopViewFront:(id)arg1;
- (void)resetFloatTopView:(id)arg1 viewController:(id)arg2;
- (void)postFloatTopViewClickNoti:(id)arg1 objectId:(id)arg2;
- (void)addFloatTopView:(id)arg1 viewController:(id)arg2;
- (void)removeFloatTopView:(id)arg1;
- (void)checkAfterFloatTopAnimate:(id)arg1;
- (void)dismissFloatTopView:(id)arg1 viewController:(id)arg2;
- (void)addPromotionView:(id)arg1 tag:(long long)arg2 superview:(id)arg3 viewController:(id)arg4 completionOnMainThread:(CDUnknownBlockType)arg5;
- (void)showFullScreenView:(id)arg1 viewController:(id)arg2;
- (void)showBottomView:(id)arg1 viewController:(id)arg2;
- (double)findFooterPosition:(id)arg1 max:(double)arg2;
- (void)showFooterView:(id)arg1;
- (void)showHeaderView:(id)arg1 viewController:(id)arg2;
- (id)findDesiredViewByClass:(Class)arg1 viewController:(id)arg2;
- (void)showFloatTopView:(id)arg1 viewController:(id)arg2;
- (void)showTopView:(id)arg1 viewController:(id)arg2;
- (void)removeTopView:(id)arg1;
- (void)checkAfterAnimate:(id)arg1;
- (void)sendDisAppearNoti:(id)arg1 viewController:(id)arg2;
- (void)dismissView:(id)arg1 viewController:(id)arg2 needShowNotice:(_Bool)arg3 animate:(_Bool)arg4;
- (void)resetView:(id)arg1 rootView:(id)arg2 originY:(double)arg3 viewController:(id)arg4;
- (void)addTopView:(id)arg1 viewController:(id)arg2 originY:(double)arg3;
- (_Bool)handleExistTopView:(id)arg1 spaceInfo:(id)arg2 rootView:(id)arg3 originY:(double)arg4 viewController:(id)arg5;
- (void)removeAllUselessView;
- (void)presentPromotionViews:(id)arg1 appId:(id)arg2 viewController:(id)arg3;
- (void)showPromotionViews:(id)arg1 appId:(id)arg2 viewController:(id)arg3;
- (void)handleUnExistViews:(id)arg1 viewController:(id)arg2 checkedLocation:(id)arg3;
- (void)checkAndShowPromotion:(_Bool)arg1 viewController:(id)arg2 checkedLocation:(id)arg3;
- (void)checkAndShowPromotion:(_Bool)arg1 checkedLocation:(id)arg2;
- (void)viewShouldUpdateByVc:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)dataSourceInitFinish;
- (void)appWillEnterForeground:(id)arg1;
- (void)controllerDidAppear:(id)arg1;
- (void)controllerWillDisappear:(id)arg1;
- (id)viewIdForVCOriginY:(id)arg1;
- (double)getCurrentVCOriginYWithViewController:(id)arg1;
- (void)setCurrentVCOriginYWithViewController:(id)arg1;
- (_Bool)isTabBarControllerWithObject:(id)arg1;
- (double)getNoticeboardViewOriginY:(id)arg1;
- (void)willDestroy;
- (void)start;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseViewController.h"

@class DRCUpdateOrderView, DRCUpdateOrderViewModel;

@interface DRCUpdateOrderViewController : DRCBaseViewController
{
    DRCUpdateOrderViewModel *_updateOrderViewModel;
    DRCUpdateOrderView *_updateOrderView;
}

@property(retain, nonatomic) DRCUpdateOrderView *updateOrderView; // @synthesize updateOrderView=_updateOrderView;
@property(retain, nonatomic) DRCUpdateOrderViewModel *updateOrderViewModel; // @synthesize updateOrderViewModel=_updateOrderViewModel;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)bind;
- (void)initNavigationRightButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;

@end

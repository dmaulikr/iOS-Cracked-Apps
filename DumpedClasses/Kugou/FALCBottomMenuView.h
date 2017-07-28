//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FALCTabBarView, NSArray, UIButton;

@interface FALCBottomMenuView : UIView
{
    NSArray *_tabBarItems;
    CDUnknownBlockType _tabBarItemClick;
    CDUnknownBlockType _chatItemClick;
    long long _menuRoomType;
    FALCTabBarView *_tabBarView;
    UIButton *_chatButton;
}

@property(retain, nonatomic) UIButton *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) FALCTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(nonatomic) long long menuRoomType; // @synthesize menuRoomType=_menuRoomType;
@property(copy, nonatomic) CDUnknownBlockType chatItemClick; // @synthesize chatItemClick=_chatItemClick;
@property(copy, nonatomic) CDUnknownBlockType tabBarItemClick; // @synthesize tabBarItemClick=_tabBarItemClick;
@property(retain, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (void).cxx_destruct;
- (id)tabBarItemViewWithTag:(long long)arg1;
- (id)tabBarItemWithTag:(long long)arg1;
- (void)updateTabBarItem:(id)arg1;
- (void)chatButtonClick;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 MenuType:(long long)arg2;

@end

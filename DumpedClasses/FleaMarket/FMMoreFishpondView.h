//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseScrollView.h"

@class FMMoreFishpondViewModel;

@interface FMMoreFishpondView : FMBaseScrollView
{
    FMMoreFishpondViewModel *_viewDO;
}

@property(retain, nonatomic) FMMoreFishpondViewModel *viewDO; // @synthesize viewDO=_viewDO;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)__$$keyPathChange_viewDO$_$items:(_Bool)arg1 old:(id)arg2 new:(id)arg3;
- (void)clickCreateFishpondEntry;
- (void)headerView;
- (void)loadView;

@end

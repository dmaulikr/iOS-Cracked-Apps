//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FMLocationFilterDO, FMLocationViewDO, NSString, UITableView;

@interface FMLocationSelectionView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    FMLocationFilterDO *_filterDO;
    FMLocationViewDO *_viewDO;
    UITableView *_tableView;
    int _selectionEndPoint;
    unsigned long long _level;
}

@property(nonatomic) int selectionEndPoint; // @synthesize selectionEndPoint=_selectionEndPoint;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) FMLocationViewDO *viewDO; // @synthesize viewDO=_viewDO;
@property(retain, nonatomic) FMLocationFilterDO *filterDO; // @synthesize filterDO=_filterDO;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)selectAll;
- (void)setGpsInfo;
- (void)updateLocatingString;
- (void)resetSelectStatus:(int)arg1;
- (void)setDataSource:(id)arg1 type:(int)arg2;
- (void)getCities:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initInternalView;
- (_Bool)isSelectHomePage;
- (id)initWithFrame:(struct CGRect)arg1 AndViewDO:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

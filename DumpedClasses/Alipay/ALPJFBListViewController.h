//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEFunctionTableController.h"

@class KABAOPRODUserPointListResult, NSMutableArray, UIView;

@interface ALPJFBListViewController : BEEFunctionTableController
{
    UIView *_jfbTableFooterView;
    UIView *_defaultTableFooterView;
    KABAOPRODUserPointListResult *_rpcResult;
    NSMutableArray *_pointArray;
}

@property(retain, nonatomic) NSMutableArray *pointArray; // @synthesize pointArray=_pointArray;
- (void).cxx_destruct;
- (void)viewWillDestroy;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)emptyText;
- (_Bool)hasNextPage;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)createJFBFooterView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

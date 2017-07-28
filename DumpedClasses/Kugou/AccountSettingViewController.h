//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "PersonBindEmailDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MyDetailInfo, NSArray, NSIndexPath, NSMutableDictionary, NSString, PersonalInfoBLL, UITableView;

@interface AccountSettingViewController : KGViewController <UITableViewDelegate, UITableViewDataSource, PersonBindEmailDelegate>
{
    UITableView *_tableview;
    MyDetailInfo *_myDetailInfo;
    PersonalInfoBLL *_personalInfoBLL;
    NSIndexPath *_modifyingIndexPath;
    NSString *_submitingKey;
    NSArray *_tbHeaderTextArr;
    NSMutableDictionary *_allSectionDic;
    NSArray *_sortedKeyArr;
}

@property(retain, nonatomic) NSArray *sortedKeyArr; // @synthesize sortedKeyArr=_sortedKeyArr;
@property(retain, nonatomic) NSMutableDictionary *allSectionDic; // @synthesize allSectionDic=_allSectionDic;
@property(retain, nonatomic) NSArray *tbHeaderTextArr; // @synthesize tbHeaderTextArr=_tbHeaderTextArr;
@property(retain, nonatomic) NSString *submitingKey; // @synthesize submitingKey=_submitingKey;
@property(retain, nonatomic) NSIndexPath *modifyingIndexPath; // @synthesize modifyingIndexPath=_modifyingIndexPath;
@property(retain, nonatomic) PersonalInfoBLL *personalInfoBLL; // @synthesize personalInfoBLL=_personalInfoBLL;
@property(retain, nonatomic) MyDetailInfo *myDetailInfo; // @synthesize myDetailInfo=_myDetailInfo;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
- (void).cxx_destruct;
- (long long)showPlayBarWay;
- (id)fuzzUpEmail:(id)arg1;
- (id)starWithCout:(unsigned long long)arg1;
- (int)isVerificationEmail;
- (void)bindingSuccess:(id)arg1;
- (void)refreshVcEmail:(id)arg1;
- (void)refreshEmail:(id)arg1;
- (void)refreshThreeParty:(id)arg1 withThreePartyBindInfo:(id)arg2;
- (void)updateSectionContactData:(id)arg1;
- (void)updateDataSourceWithInfo:(id)arg1;
- (void)refreshPhone:(id)arg1;
- (_Bool)lastRowInSection:(id)arg1;
- (void)sendBindClickWith:(int)arg1 isBind:(_Bool)arg2;
- (void)sendRequestSuccessBIWith:(int)arg1 isBind:(_Bool)arg2;
- (void)handleUnBindErrorWith:(id)arg1 withParterId:(int)arg2;
- (void)handleBindErrorWith:(id)arg1 withParterId:(int)arg2;
- (id)getCurrentBindInfoEntityWith:(int)arg1;
- (void)showUnbindActionSheetWithModel:(id)arg1 WithPartnerId:(int)arg2;
- (void)requestUnBindThreePartyWithModel:(id)arg1 WithPartnerId:(int)arg2;
- (void)requestBindThreePartyWithModel:(id)arg1 WithPartnerId:(int)arg2;
- (void)gotoBindOrUnbind:(id)arg1 withSettingInfoEntity:(id)arg2 withPartnerId:(int)arg3;
- (void)bindThirdParty:(id)arg1;
- (void)editUserPassword:(id)arg1;
- (void)editUserEmail:(id)arg1;
- (void)editUserMobile:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)hideLoadingState;
- (void)showLoadingState;
- (void)reConnectEvent;
- (_Bool)networkIsReady;
- (void)updateUserOtherInfoWithParam:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)updateUserBasicInfoWithParam:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)getDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getData;
- (id)createInfoEntityWithKey:(id)arg1 name:(id)arg2 img:(id)arg3 highlightedImg:(id)arg4 editable:(_Bool)arg5 defaultDescription:(id)arg6;
- (void)initStaticData;
- (void)initViews;
- (void)didReceiveMemoryWarning;
- (void)addObserver;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

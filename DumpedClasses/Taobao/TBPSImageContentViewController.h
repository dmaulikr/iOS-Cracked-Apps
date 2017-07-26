//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBPSAdapterViewController.h"

#import "TBPSImageCollectionViewControllerDelegate.h"

@class NSString, TBPSAssetGroup, TBPSImageCollectionViewController, TBPSImagePickerErrorView;

@interface TBPSImageContentViewController : TBPSAdapterViewController <TBPSImageCollectionViewControllerDelegate>
{
    _Bool _addObserver;
    _Bool _isShowCancel;
    id <TBPSImagePickerViewControllerDelegate> _delegate;
    TBPSImageCollectionViewController *_collectionViewController;
    TBPSImagePickerErrorView *_errorView;
    TBPSAssetGroup *_selectedGroup;
}

@property(retain, nonatomic) TBPSAssetGroup *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(retain, nonatomic) TBPSImagePickerErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBPSImageCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic) _Bool isShowCancel; // @synthesize isShowCancel=_isShowCancel;
@property(nonatomic) id <TBPSImagePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didSelectAsset:(id)arg1;
- (void)layoutSubviews;
- (void)loadGroup:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (void)handleAssetGroupDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)dismiss:(id)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

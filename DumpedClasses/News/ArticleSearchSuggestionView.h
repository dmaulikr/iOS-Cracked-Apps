//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SSHttpOperation, SSThemedTableView;

@interface ArticleSearchSuggestionView : SSViewBase <UITableViewDataSource, UITableViewDelegate>
{
    SSThemedTableView *_tableView;
    NSString *_searchText;
    NSString *_fromParam;
    NSString *_curTab;
    CDUnknownBlockType _selectedHandler;
    SSHttpOperation *_operation;
    NSArray *_suggestions;
}

@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) SSHttpOperation *operation; // @synthesize operation=_operation;
@property(copy, nonatomic) CDUnknownBlockType selectedHandler; // @synthesize selectedHandler=_selectedHandler;
@property(copy, nonatomic) NSString *curTab; // @synthesize curTab=_curTab;
@property(copy, nonatomic) NSString *fromParam; // @synthesize fromParam=_fromParam;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)fetchSuggestionKeyword;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

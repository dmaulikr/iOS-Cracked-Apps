//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGMusicTableViewCell.h"

@class NSString;

@interface SearchResultLocalMusicCell : KGMusicTableViewCell
{
    NSString *_highlightKey;
}

@property(retain, nonatomic) NSString *highlightKey; // @synthesize highlightKey=_highlightKey;
- (void).cxx_destruct;
- (id)didHighlityInString:(id)arg1 withKey:(id)arg2 andDefColor:(id)arg3;
- (void)refreshTitleAndSingerLabelContent;
- (void)didRefreshPlayMarkView:(_Bool)arg1;
- (void)didRefreshLabelColor;
- (void)didRefreshSubviews;

@end

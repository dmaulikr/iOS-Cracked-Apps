//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTBaseCell.h"

@class TTVideoFloatCellEntity, TTVideoFloatContentView;

@interface TTVideoFloatCell : TTBaseCell
{
}

+ (double)cellHeightWithEntity:(id)arg1 indexPath:(id)arg2;
+ (struct UIEdgeInsets)cellInsets;
- (id)animationToView;
- (_Bool)isImmersed;
- (void)willBeginReuse;
- (void)unImmerseAll;
- (void)immerseAll;
- (void)unImmerseHalf;
- (void)immerseHalf;
- (id)detailModel;
- (void)addMovieView:(id)arg1;
- (void)showBackgroundImage:(_Bool)arg1;
- (void)showPlayIcon:(_Bool)arg1;
- (void)removeMovieView;
- (id)videoID;
- (id)listCellConfigure;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) TTVideoFloatCellEntity *cellEntity; // @dynamic cellEntity;
@property(readonly, nonatomic) TTVideoFloatContentView *customContentView; // @dynamic customContentView;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface SSendWordEqualItemSpacingLayout : UICollectionViewFlowLayout
{
    unsigned long long _itemSpacing;
    id <SEqualSpaceFlowLayoutDelegate> _delegate;
}

@property(nonatomic) __weak id <SEqualSpaceFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long itemSpacing; // @synthesize itemSpacing=_itemSpacing;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end

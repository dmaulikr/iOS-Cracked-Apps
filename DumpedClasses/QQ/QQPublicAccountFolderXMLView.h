//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPublicAccountFolderCellContentView.h"

@class QQPublicAccountFolderItemView;

@interface QQPublicAccountFolderXMLView : QQPublicAccountFolderCellContentView
{
    QQPublicAccountFolderItemView *_itemView;
}

+ (int)getViewHeight:(id)arg1;
@property(retain, nonatomic) QQPublicAccountFolderItemView *itemView; // @synthesize itemView=_itemView;
- (void)layoutContentView:(id)arg1;
- (void)generateSubviews;
- (void)dealloc;

@end

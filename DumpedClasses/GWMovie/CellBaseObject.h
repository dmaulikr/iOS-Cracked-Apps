//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CellBaseObject : NSObject
{
    _Bool _isWithoutNib;
    int _rowIndex;
    NSString *_cellClassName;
    double _cellWidth;
}

@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) int rowIndex; // @synthesize rowIndex=_rowIndex;
@property(nonatomic) _Bool isWithoutNib; // @synthesize isWithoutNib=_isWithoutNib;
@property(copy, nonatomic) NSString *cellClassName; // @synthesize cellClassName=_cellClassName;
- (void).cxx_destruct;
- (id)init;

@end

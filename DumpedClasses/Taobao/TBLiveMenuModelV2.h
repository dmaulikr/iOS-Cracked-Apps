//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBLiveMenuChannelModel>;

@interface TBLiveMenuModelV2 : TBJSONModel
{
    long long _activeChannelIndex;
    NSArray<TBLiveMenuChannelModel> *_liveHomeMenuDatas;
}

@property(retain, nonatomic) NSArray<TBLiveMenuChannelModel> *liveHomeMenuDatas; // @synthesize liveHomeMenuDatas=_liveHomeMenuDatas;
@property(nonatomic) long long activeChannelIndex; // @synthesize activeChannelIndex=_activeChannelIndex;
- (void).cxx_destruct;

@end

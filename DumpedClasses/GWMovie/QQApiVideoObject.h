//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiURLObject.h"

@class NSURL;

@interface QQApiVideoObject : QQApiURLObject
{
    NSURL *_flashURL;
}

+ (id)objectWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 previewImageURL:(id)arg4;
+ (id)objectWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 previewImageData:(id)arg4;
@property(retain, nonatomic) NSURL *flashURL; // @synthesize flashURL=_flashURL;

@end

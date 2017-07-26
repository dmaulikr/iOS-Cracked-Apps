//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, UIImageView;

@interface TBLiveFeedVideoContentView : UIView
{
    UIView *_blurView;
    UIImageView *_videoImageView;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVPlayerItem *_playerItem;
}

@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
- (void).cxx_destruct;
- (void)stopPlayBack:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisteListener;
- (void)registeListener;
- (void)setupAVPlayer:(id)arg1;
- (void)setupBlurView;
- (void)setupVideoImageView;
- (void)stopPlayer;
- (void)hideAVPlayerWithAnimation:(id)arg1;
- (void)startAVPlayer:(id)arg1;
- (void)setImageUrl:(id)arg1 videoUrl:(id)arg2 playVideo:(_Bool)arg3;
- (void)onRecvMemoryWarning;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

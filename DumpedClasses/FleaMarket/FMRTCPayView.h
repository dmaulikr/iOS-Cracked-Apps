//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMAvatarImageView, NSString, UIButton, UILabel;

@interface FMRTCPayView : UIView
{
    FMAvatarImageView *_userAvatarImgV;
    UILabel *_timerLbl;
    UIButton *_payBtn;
    UILabel *_userNameLbl;
    NSString *_busnessId;
    NSString *_sessionId;
    NSString *_payeeNick;
    NSString *_transferUrl;
}

@property(copy, nonatomic) NSString *transferUrl; // @synthesize transferUrl=_transferUrl;
@property(copy, nonatomic) NSString *payeeNick; // @synthesize payeeNick=_payeeNick;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *busnessId; // @synthesize busnessId=_busnessId;
@property(retain, nonatomic) UILabel *userNameLbl; // @synthesize userNameLbl=_userNameLbl;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UILabel *timerLbl; // @synthesize timerLbl=_timerLbl;
@property(retain, nonatomic) FMAvatarImageView *userAvatarImgV; // @synthesize userAvatarImgV=_userAvatarImgV;
- (void).cxx_destruct;
- (void)payAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

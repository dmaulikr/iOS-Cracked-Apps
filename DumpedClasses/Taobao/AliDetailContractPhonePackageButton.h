//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailContractPhoneButton.h"

@class AliDetailContractPhonePackageButtonSeparatorView, AliDetailSkuContractPlan, UILabel;

@interface AliDetailContractPhonePackageButton : AliDetailContractPhoneButton
{
    AliDetailSkuContractPlan *_plan;
    UILabel *_priceLabel;
    AliDetailContractPhonePackageButtonSeparatorView *_separatorLine;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) AliDetailContractPhonePackageButtonSeparatorView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) AliDetailSkuContractPlan *plan; // @synthesize plan=_plan;
- (void).cxx_destruct;
- (void)setIsNewStyle:(_Bool)arg1;
- (void)setStatus:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setupSubViews;
- (id)formatPrice:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

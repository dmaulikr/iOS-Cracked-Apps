//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HTSTTTAttributedLabel, NSDate, NSDictionary, NSString, NSTextCheckingResult, NSTimeZone, NSURL;

@protocol HTSTTTAttributedLabelDelegate <NSObject>

@optional
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didLongPressLinkWithTextCheckingResult:(NSTextCheckingResult *)arg2 atPoint:(struct CGPoint)arg3;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didLongPressLinkWithTransitInformation:(NSDictionary *)arg2 atPoint:(struct CGPoint)arg3;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didLongPressLinkWithDate:(NSDate *)arg2 timeZone:(NSTimeZone *)arg3 duration:(double)arg4 atPoint:(struct CGPoint)arg5;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didLongPressLinkWithDate:(NSDate *)arg2 atPoint:(struct CGPoint)arg3;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didLongPressLinkWithPhoneNumber:(NSString *)arg2 atPoint:(struct CGPoint)arg3;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didLongPressLinkWithAddress:(NSDictionary *)arg2 atPoint:(struct CGPoint)arg3;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didLongPressLinkWithURL:(NSURL *)arg2 atPoint:(struct CGPoint)arg3;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didSelectLinkWithTextCheckingResult:(NSTextCheckingResult *)arg2;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didSelectLinkWithTransitInformation:(NSDictionary *)arg2;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didSelectLinkWithDate:(NSDate *)arg2 timeZone:(NSTimeZone *)arg3 duration:(double)arg4;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didSelectLinkWithDate:(NSDate *)arg2;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didSelectLinkWithPhoneNumber:(NSString *)arg2;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didSelectLinkWithAddress:(NSDictionary *)arg2;
- (void)attributedLabel:(HTSTTTAttributedLabel *)arg1 didSelectLinkWithURL:(NSURL *)arg2;
@end

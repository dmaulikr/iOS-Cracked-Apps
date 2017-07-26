//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor;

@interface CPTColor : NSObject <NSCopying, NSCoding>
{
    struct CGColor *cgColor;
}

+ (id)colorWithGenericGray:(double)arg1;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)blackColor;
+ (id)darkGrayColor;
+ (id)grayColor;
+ (id)lightGrayColor;
+ (id)whiteColor;
+ (id)clearColor;
@property(readonly, nonatomic) struct CGColor *cgColor; // @synthesize cgColor;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isOpaque) _Bool opaque; // @dynamic opaque;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithComponentRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
@property(readonly, retain, nonatomic) UIColor *uiColor; // @dynamic uiColor;

@end

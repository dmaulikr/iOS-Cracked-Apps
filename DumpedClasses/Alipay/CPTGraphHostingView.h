//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CPTGraph, UIPinchGestureRecognizer;

@interface CPTGraphHostingView : UIView
{
    CPTGraph *hostedGraph;
    _Bool collapsesLayers;
    _Bool allowPinchScaling;
    UIPinchGestureRecognizer *pinchGestureRecognizer;
}

+ (Class)layerClass;
@property(nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer;
@property(nonatomic) _Bool allowPinchScaling; // @synthesize allowPinchScaling;
@property(nonatomic) _Bool collapsesLayers; // @synthesize collapsesLayers;
@property(retain, nonatomic) CPTGraph *hostedGraph; // @synthesize hostedGraph;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateNotifications;
- (void)graphNeedsRedraw:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, UIViewController;

@interface QQVCLeakHunter : NSObject
{
    double _leakInterval;
    NSMutableDictionary *_allVCModels;
    NSMutableDictionary *_popedVCModels;
    id <YellowVCLeakDelegate> _delegate;
    NSMutableArray *_operationSeq;
    UIViewController *_popingVC;
    NSSet *_vcClassWhiteList;
    NSSet *_viewClassWhiteList;
    NSArray *_vcBaseClassWhiteList;
}

+ (void)swizzleAllMethod;
+ (id)getInstance;
@property(retain, nonatomic) NSArray *vcBaseClassWhiteList; // @synthesize vcBaseClassWhiteList=_vcBaseClassWhiteList;
@property(retain, nonatomic) NSSet *viewClassWhiteList; // @synthesize viewClassWhiteList=_viewClassWhiteList;
@property(retain, nonatomic) NSSet *vcClassWhiteList; // @synthesize vcClassWhiteList=_vcClassWhiteList;
@property(nonatomic) __weak UIViewController *popingVC; // @synthesize popingVC=_popingVC;
@property(retain, nonatomic) NSMutableArray *operationSeq; // @synthesize operationSeq=_operationSeq;
@property(nonatomic) id <YellowVCLeakDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)beginMonitorVC;
- (void)stopMonitorVC;
- (void)markedAsWhiteObj:(id)arg1;
- (void)setWhiteViewList:(id)arg1;
- (void)setWhiteVCList:(id)arg1 baseVCArray:(id)arg2;
- (void)beginMonitorWithDelegate:(id)arg1 interval:(double)arg2;
- (id)getRecentOprationSeq;
- (void)addOprationSeq:(id)arg1;
- (void)checkLeakForModel:(id)arg1;
- (void)checkLeakForKey:(id)arg1;
- (void)cancelCheckForKey:(id)arg1;
- (void)startVCLeakTimer:(id)arg1 delay:(double)arg2;
- (_Bool)isInWhiteList:(id)arg1;
- (void)addPresentedVC:(id)arg1 toParent:(id)arg2;
- (void)pushVCToStack:(id)arg1;
- (void)startWhiteVCLeakObservation:(id)arg1;
- (void)startPopingWithoutAnimation:(id)arg1;
- (void)clearPopingVC;
- (void)startPopingWithAnimation:(id)arg1;
- (void)handleVCDidDisappear:(id)arg1;
- (void)didEnterBackground;
- (void)willEnterForground;
- (id)init;

@end

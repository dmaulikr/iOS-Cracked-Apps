//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SDDJCityEstimateModel, SDDJEstimateModel;

@interface SDDJEstimateService : NSObject
{
    _Bool _isCostCellLoading;
    _Bool _isCityServiceCostCellLoading;
    _Bool _isCrossCityServiceCostCellLoading;
    SDDJEstimateModel *_estimateModel;
    SDDJCityEstimateModel *_cityCostModel;
    SDDJCityEstimateModel *_crossCityCostModel;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isCrossCityServiceCostCellLoading; // @synthesize isCrossCityServiceCostCellLoading=_isCrossCityServiceCostCellLoading;
@property(retain, nonatomic) SDDJCityEstimateModel *crossCityCostModel; // @synthesize crossCityCostModel=_crossCityCostModel;
@property(nonatomic) _Bool isCityServiceCostCellLoading; // @synthesize isCityServiceCostCellLoading=_isCityServiceCostCellLoading;
@property(retain, nonatomic) SDDJCityEstimateModel *cityCostModel; // @synthesize cityCostModel=_cityCostModel;
@property(nonatomic) _Bool isCostCellLoading; // @synthesize isCostCellLoading=_isCostCellLoading;
@property(retain, nonatomic) SDDJEstimateModel *estimateModel; // @synthesize estimateModel=_estimateModel;
- (void).cxx_destruct;
- (double)getEstimateMoneyWithEstimateModel:(id)arg1;
- (id)dynamicPriceDesc;
- (void)requestCityServiceEstimateWithServiceType:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestNormalSeriveEstimateWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestEstimateWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray, NSString;

@interface GMSx_GMMMapsEngineFeatureResponseProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_PBMutableArray *featureDetailsArray; // @dynamic featureDetailsArray;
@property(nonatomic) _Bool hasFeatureDetailsArray; // @dynamic hasFeatureDetailsArray;
@property(nonatomic) _Bool hasHtmlDescription; // @dynamic hasHtmlDescription;
@property(nonatomic) _Bool hasVectordbId; // @dynamic hasVectordbId;
@property(retain, nonatomic) NSString *htmlDescription; // @dynamic htmlDescription;
@property(retain, nonatomic) NSString *vectordbId; // @dynamic vectordbId;

@end

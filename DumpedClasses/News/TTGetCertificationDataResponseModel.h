//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<TTGetCertificationDataIndustryResponseModel>, NSNumber, NSString, TTGetCertificationDataUserAuditInfoResponseModel, TTGetCertificationDataUserInfoResponseModel;

@interface TTGetCertificationDataResponseModel : TTResponseModel
{
    NSArray<TTGetCertificationDataIndustryResponseModel> *_industry;
    TTGetCertificationDataUserInfoResponseModel *_user_auth_data;
    TTGetCertificationDataUserAuditInfoResponseModel *_audit_info;
    NSNumber *_is_pgc;
    NSString *_auditing_show_info;
    NSString *_audit_not_pass_info;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *audit_not_pass_info; // @synthesize audit_not_pass_info=_audit_not_pass_info;
@property(copy, nonatomic) NSString *auditing_show_info; // @synthesize auditing_show_info=_auditing_show_info;
@property(retain, nonatomic) NSNumber *is_pgc; // @synthesize is_pgc=_is_pgc;
@property(retain, nonatomic) TTGetCertificationDataUserAuditInfoResponseModel *audit_info; // @synthesize audit_info=_audit_info;
@property(retain, nonatomic) TTGetCertificationDataUserInfoResponseModel *user_auth_data; // @synthesize user_auth_data=_user_auth_data;
@property(retain, nonatomic) NSArray<TTGetCertificationDataIndustryResponseModel> *industry; // @synthesize industry=_industry;
- (void).cxx_destruct;

@end

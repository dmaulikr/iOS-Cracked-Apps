//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "QLJumpObjectOpenUrlDelegate.h"

@class NSString, UIViewController;

@interface QLMailReportCtl : NSObject <MFMailComposeViewControllerDelegate, QLJumpObjectOpenUrlDelegate>
{
    UIViewController *_parentController;
}

+ (_Bool)OpenJumpUrlWithobject;
+ (id)sharedInstance;
@property(retain, nonatomic) UIViewController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (id)ReportLogMailBody;
- (void)cleanMailparentController;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)displayComposerSheet:(id)arg1 ToRecipients:(id)arg2 CCRecipients:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

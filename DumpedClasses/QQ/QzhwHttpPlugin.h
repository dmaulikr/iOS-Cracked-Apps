//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QzHybridWebCachePluginInterface.h"

@class NSString;

@interface QzhwHttpPlugin : NSObject <QzHybridWebCachePluginInterface>
{
}

- (void)rewriteResponseWithRequest:(id)arg1 response:(id)arg2 bodyData:(id)arg3 cache:(id)arg4 success:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
- (id)rewriteRequestForRequest:(id)arg1 cache:(id)arg2;
- (_Bool)canHandleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

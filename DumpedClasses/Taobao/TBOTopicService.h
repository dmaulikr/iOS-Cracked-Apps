//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBOTopicService : NSObject
{
}

+ (id)instance;
- (void)canPublishTopicWithSuccessHandle:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)communityManageById:(id)arg1 action:(id)arg2;
- (void)communityActionById:(id)arg1 action:(id)arg2;
- (void)topicActionById:(id)arg1 action:(unsigned long long)arg2;
- (void)action:(int)arg1 withTopicId:(id)arg2;
- (void)action:(int)arg1 withTopic:(id)arg2;
- (void)publishTopic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteTopicWithId:(id)arg1;
- (void)deleteTopic:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TaskQueue;
@protocol OS_dispatch_queue;

@interface StoreQueueManager : NSObject
{
    _Bool _automaticDownloadsAreDisabled;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _checkAutomaticDownloadQueueOnEnable;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TaskQueue *_operationQueue;
}

+ (void)reportAnonymousPings:(id)arg1;
+ (id)storeItemsFromResponseDictionary:(id)arg1;
+ (_Bool)processJobResult:(id)arg1 forReason:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_operationQueue;
- (void)_dispatchCallbackAsync:(CDUnknownBlockType)arg1;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (void)managedApplicationRequestWithOptions:(id)arg1 clientID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getDownloadQueueWithType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enableAutomaticDownloadsWithReason:(id)arg1;
- (void)disableAutomaticDownloadsWithReason:(id)arg1;
- (void)claimApplicationsWithOptions:(id)arg1 clientID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)checkQueue:(long long)arg1 clientID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end


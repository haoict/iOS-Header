//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPOperationClient-Protocol.h>

@class FPActionOperationLocator, NSError;

@protocol FPDaemonActionOperationClient <FPOperationClient>
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationCompletedRoot:(FPActionOperationLocator *)arg1 resultingItem:(FPActionOperationLocator *)arg2 error:(NSError *)arg3 completion:(void (^)(void))arg4;
- (void)remoteOperationCreatedRoot:(FPActionOperationLocator *)arg1 resultingItem:(FPActionOperationLocator *)arg2 completion:(void (^)(void))arg3;
@end


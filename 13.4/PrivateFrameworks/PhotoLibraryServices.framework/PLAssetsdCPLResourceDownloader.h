//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLAssetsdCPLResourceDownloader : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSString *_trustedCallerBundleID;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_pendingCPLDownloadsIsolationQueue;
    NSMutableDictionary *_pendingCPLDownloads;
}

- (void).cxx_destruct;
- (void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)arg1 downloadContext:(id)arg2;
- (void)cancelCPLDownloadTasks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)startCPLDownloadForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 highPriority:(_Bool)arg4 track:(_Bool)arg5 notify:(_Bool)arg6 transient:(_Bool)arg7 proposedTaskIdentifier:(id)arg8 doneToken:(id)arg9 error:(id *)arg10;
- (void)handleInvalidation;
- (void)_handleInvalidation;
- (id)initWithPhotoLibrary:(id)arg1 trustedCallerBundleID:(id)arg2 clientConnection:(id)arg3;

@end


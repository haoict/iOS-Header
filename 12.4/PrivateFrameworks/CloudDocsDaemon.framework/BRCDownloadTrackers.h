//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCDownloadTrackers : NSObject
{
    BRCAccountSession *_session;
    NSMutableDictionary *_trackersByDocID;
    NSMapTable *_docIDsByTracker;
}

- (void).cxx_destruct;
- (_Bool)hasPendingTrackerForDocumentID:(id)arg1;
- (unsigned long long)spaceRequiredForTrackers;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (void)removeDownloadTracker:(id)arg1;
- (void)addDownloadTracker:(id)arg1 forItemWithDocID:(id)arg2;
- (id)initWithSession:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerBookmarkOperation-Protocol.h>

@class NSString;

@interface WBSCyclerCreateBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>
{
}

- (void)_createRandomLeafWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createRandomListWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_randomListWithContext:(id)arg1;
- (void)executeWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


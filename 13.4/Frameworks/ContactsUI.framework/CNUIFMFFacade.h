//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFSession;

__attribute__((visibility("hidden")))
@interface CNUIFMFFacade : NSObject
{
    FMFSession *_fmfSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
- (void)fetchFriendHandlesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFMFSession:(id)arg1;
- (id)init;

@end


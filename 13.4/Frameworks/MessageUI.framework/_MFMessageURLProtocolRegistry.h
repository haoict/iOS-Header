//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _MFMessageURLProtocolRegistry : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMapTable *_storage;
}

+ (id)sharedRegistry;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *storage; // @synthesize storage=_storage;
- (id)contentRepresentationForURL:(id)arg1;
- (void)registerContentRepresentation:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface TLBacklight : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    _Bool _isObservingBacklight;
    long long _backlightStatus;
}

+ (id)sharedBacklight;
- (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)_notifyObservers:(id)arg1 ofUpdatedBacklightStatus:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_setObservingBacklight:(_Bool)arg1;
- (void)_setBacklightStatus:(long long)arg1;
@property(readonly) long long backlightStatus;
- (void)dealloc;
- (id)init;

@end


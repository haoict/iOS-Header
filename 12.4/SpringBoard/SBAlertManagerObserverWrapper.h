//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBAlertManagerObserver;

@interface SBAlertManagerObserverWrapper : NSObject
{
    CDStruct_8fb8c794 _flags;
    id <SBAlertManagerObserver> _observer;
}

@property(readonly, nonatomic) CDStruct_8fb8c794 flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) __weak id <SBAlertManagerObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 flags:(CDStruct_8fb8c794)arg2;

@end


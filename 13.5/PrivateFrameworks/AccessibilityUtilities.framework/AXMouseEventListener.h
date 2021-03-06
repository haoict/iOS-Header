//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXDeviceMonitorDelegate-Protocol.h>

@class AXDeviceMonitor, AXEventProcessor, NSHashTable, NSSet, NSString;

@interface AXMouseEventListener : NSObject <AXDeviceMonitorDelegate>
{
    AXDeviceMonitor *_deviceMonitor;
    AXEventProcessor *_eventProcessor;
    struct os_unfair_lock_s _cachedMouseDevicesLock;
    NSSet *_cachedMouseDevices;
    struct os_unfair_lock_s _observerLock;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
+ (id)_mouseMatching;
- (void).cxx_destruct;
- (void)_handleMouseButtonEvent:(id)arg1;
- (void)deviceMonitorDidDetectDeviceEvent:(id)arg1;
- (void)mouseSettingsDidChange;
@property(readonly, nonatomic) _Bool currentDevicesHaveAssistiveTouchCustomActions;
- (void)endFilteringEvents;
- (void)beginFilteringEvents;
- (id)discoveredMouseDevices;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


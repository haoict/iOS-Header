//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SpeakThisServicesUI : NSObject
{
}

+ (void)disableSpeakThisServices;
+ (void)enableSpeakThisServices;
- (void)_kbFrameWillChange:(id)arg1;
- (void)_unregisterForKBFrameNotifications;
- (void)_registerForKBFrameNotifications;
- (void)_handleSpeakThisEnabledStatusDidChangeNotification:(id)arg1;
- (id)init;

@end


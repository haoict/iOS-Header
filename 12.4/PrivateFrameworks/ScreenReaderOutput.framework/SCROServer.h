//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;
@protocol SCROServerDelegate;

@interface SCROServer : NSObject
{
    NSLock *_contentLock;
    id <SCROServerDelegate> _delegate;
    struct __CFRunLoopSource *_serverSource;
    struct __CFRunLoopSource *_deathSource;
    struct __CFRunLoopTimer *_deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    long long _clientCount;
    _Bool _isRegisteredWithMach;
}

+ (id)sharedServer;
- (void).cxx_destruct;
- (struct __CFRunLoopSource *)serverSource;
- (void)unregisterWithMach;
- (_Bool)registerWithMach;
- (_Bool)isRegisteredWithMach;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)_registerForNotificationOnDeathPort:(unsigned int)arg1;
- (struct __CFRunLoopTimer *)_deathTimer;
- (void)_setClientCount:(long long)arg1;
- (long long)_incrementClientCount;
- (long long)_clientCount;
- (id)init;

@end


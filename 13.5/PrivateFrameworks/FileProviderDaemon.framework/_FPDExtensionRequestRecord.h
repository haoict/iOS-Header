//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPXPCAutomaticErrorProxy, NSDate;

__attribute__((visibility("hidden")))
@interface _FPDExtensionRequestRecord : NSObject
{
    FPXPCAutomaticErrorProxy *_proxy;
    SEL _selector;
    NSDate *_timeout;
}

- (void).cxx_destruct;
@property(nonatomic) NSDate *timeout; // @synthesize timeout=_timeout;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property __weak FPXPCAutomaticErrorProxy *proxy; // @synthesize proxy=_proxy;
- (id)description;

@end


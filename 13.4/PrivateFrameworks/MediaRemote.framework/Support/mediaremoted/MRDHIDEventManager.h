//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRDHIDEventManager : NSObject
{
}

- (void)_dispatchKeypressEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2;
- (void)dispatchUnicodeEventWithText:(id)arg1;
- (void)dispatchKeypressEvent:(unsigned long long)arg1;
- (void)dispatchHomeButton;
- (void)dispatchHIDEvent:(struct __IOHIDEvent *)arg1;

@end


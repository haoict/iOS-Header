//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString;
@protocol SXActionSerializer;

@protocol SXActionSerializationManager <NSObject>
- (void)registerSerializer:(id <SXActionSerializer>)arg1 actionType:(NSString *)arg2;
@end


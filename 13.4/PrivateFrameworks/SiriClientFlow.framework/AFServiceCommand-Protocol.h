//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriClientFlow/NSObject-Protocol.h>

@class NSDictionary;
@protocol AFServiceHelper;

@protocol AFServiceCommand <NSObject>

@optional
- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1 serviceHelper:(id <AFServiceHelper>)arg2;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1;
@end


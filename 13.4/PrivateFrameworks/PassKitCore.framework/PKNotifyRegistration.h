//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface PKNotifyRegistration : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
    int _token;
    NSMutableArray *_subregistrations;
    _Bool _invalidated;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)hasSubregistrations;
- (void)removeInvalidatedSubregistration:(id)arg1;
- (id)subregisterWithHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end


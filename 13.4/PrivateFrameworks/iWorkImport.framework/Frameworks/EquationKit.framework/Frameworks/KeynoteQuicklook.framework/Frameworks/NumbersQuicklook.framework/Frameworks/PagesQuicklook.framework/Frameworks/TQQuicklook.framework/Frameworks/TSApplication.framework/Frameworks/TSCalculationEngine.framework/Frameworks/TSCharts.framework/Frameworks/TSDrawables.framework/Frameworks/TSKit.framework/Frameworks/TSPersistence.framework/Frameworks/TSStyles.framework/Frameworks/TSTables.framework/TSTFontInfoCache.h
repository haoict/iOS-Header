//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TSTFontInfoCache : NSObject
{
    struct _opaque_pthread_rwlock_t _rwlock;
    struct os_unfair_lock_s _resolvedTextStyleLock;
    NSMapTable *_cache;
    NSMapTable *_propertyMapToTextStyleMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *propertyMapToTextStyleMap; // @synthesize propertyMapToTextStyleMap=_propertyMapToTextStyleMap;
@property(retain, nonatomic) NSMapTable *cache; // @synthesize cache=_cache;
- (void)p_didEnterBackground:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)resolvedTextStyleWithPropertyMap:(id)arg1;
- (id)fontInfoForTextStyle:(id)arg1 withString:(id)arg2;
- (id)fontInfoForTextStyle:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPBitmapStore;

__attribute__((visibility("hidden")))
@interface UIStatusBarCache : NSObject
{
    CPBitmapStore *_store;
    _Bool _writeable;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isWriteable) _Bool writeable; // @synthesize writeable=_writeable;
- (void).cxx_destruct;
- (void)removeImagesInGroup:(id)arg1;
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3;
- (id)init;

@end


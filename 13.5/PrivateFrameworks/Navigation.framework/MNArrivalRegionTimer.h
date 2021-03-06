//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOArrivalRegion, NSTimer;
@protocol MNArrivalRegionTimerDelegate;

__attribute__((visibility("hidden")))
@interface MNArrivalRegionTimer : NSObject
{
    GEOArrivalRegion *_arrivalRegion;
    NSTimer *_timer;
    id <MNArrivalRegionTimerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MNArrivalRegionTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateForLocation:(id)arg1;
- (void)dealloc;
- (id)initWithArrivalRegion:(id)arg1;
- (id)init;

@end


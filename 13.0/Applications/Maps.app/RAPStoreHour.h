//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GEOPDHours, GEORPFeedbackBusinessHours, NSArray, NSDate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RAPStoreHour : NSObject <NSCopying>
{
    NSMutableArray *_mutableDaysOpen;
    id _observer;
    CDUnknownBlockType _changeHandler;
    GEOPDHours *_shadowHours;
    _Bool _open24Hours;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool open24Hours; // @synthesize open24Hours=_open24Hours;
- (void).cxx_destruct;
- (void)notifyObserver;
- (void)clearObserver;
- (void)setObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) GEORPFeedbackBusinessHours *businessHours;
- (_Bool)isSubmittable;
- (_Bool)containsDay:(int)arg1;
- (void)toggleDay:(int)arg1;
@property(readonly, nonatomic) NSArray *daysOpen;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPlaceDailyHours:(id)arg1;
- (id)init;

@end


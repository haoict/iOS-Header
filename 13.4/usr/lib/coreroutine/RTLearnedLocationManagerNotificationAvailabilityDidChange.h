//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTLearnedLocationManagerNotificationAvailabilityDidChange : RTNotification
{
    _Bool _available;
}

@property(readonly, nonatomic) _Bool available; // @synthesize available=_available;
- (id)description;
- (id)initWithAvailability:(_Bool)arg1;

@end


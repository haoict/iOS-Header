//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CALNCoreLocationProvider;

@interface CALNCalendarCoreLocationManager : NSObject
{
    id <CALNCoreLocationProvider> _coreLocationProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CALNCoreLocationProvider> coreLocationProvider; // @synthesize coreLocationProvider=_coreLocationProvider;
- (void)markAsHavingReceivedLocation;
@property(readonly, nonatomic) _Bool allowsLocationAlerts;
- (id)initWithCoreLocationProvider:(id)arg1;

@end


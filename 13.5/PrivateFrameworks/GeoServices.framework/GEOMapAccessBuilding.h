//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapBuilding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding>
{
    CDStruct_0c54f6ee *_buildingFeature;
    NSArray *_sections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)dealloc;
- (id)initWithBuildingFeature:(CDStruct_0c54f6ee *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


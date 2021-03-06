//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PGMeaningfulEventLocationMobilityTrait, PGMeaningfulEventLocationSetTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait;

@interface PGMeaningfulEventCriteria : NSObject
{
    _Bool _debug;
    PGMeaningfulEventSceneSetTrait *_scenesTrait;
    PGMeaningfulEventSetTrait *_roisTrait;
    PGMeaningfulEventSetTrait *_poisTrait;
    PGMeaningfulEventLocationSetTrait *_locationsTrait;
    PGMeaningfulEventSetTrait *_datesTrait;
    PGMeaningfulEventSetTrait *_peopleTrait;
    PGMeaningfulEventNumberTrait *_numberOfPeopleTrait;
    PGMeaningfulEventSetTrait *_socialGroupsTrait;
    PGMeaningfulEventNumberTrait *_minimumDurationTrait;
    PGMeaningfulEventNumberTrait *_maximumDurationTrait;
    PGMeaningfulEventPartOfDayTrait *_significantPartsOfDayTrait;
    PGMeaningfulEventPartOfDayTrait *_allPartsOfDayTrait;
    PGMeaningfulEventLocationMobilityTrait *_locationMobilityTrait;
    PGMeaningfulEventSetTrait *_publicEventCategoriesTrait;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDebug) _Bool debug; // @synthesize debug=_debug;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *publicEventCategoriesTrait; // @synthesize publicEventCategoriesTrait=_publicEventCategoriesTrait;
@property(retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait; // @synthesize locationMobilityTrait=_locationMobilityTrait;
@property(retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait; // @synthesize allPartsOfDayTrait=_allPartsOfDayTrait;
@property(retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait; // @synthesize significantPartsOfDayTrait=_significantPartsOfDayTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait; // @synthesize maximumDurationTrait=_maximumDurationTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait; // @synthesize minimumDurationTrait=_minimumDurationTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *socialGroupsTrait; // @synthesize socialGroupsTrait=_socialGroupsTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait; // @synthesize numberOfPeopleTrait=_numberOfPeopleTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *peopleTrait; // @synthesize peopleTrait=_peopleTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *datesTrait; // @synthesize datesTrait=_datesTrait;
@property(retain, nonatomic) PGMeaningfulEventLocationSetTrait *locationsTrait; // @synthesize locationsTrait=_locationsTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *poisTrait; // @synthesize poisTrait=_poisTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *roisTrait; // @synthesize roisTrait=_roisTrait;
@property(retain, nonatomic) PGMeaningfulEventSceneSetTrait *scenesTrait; // @synthesize scenesTrait=_scenesTrait;
- (id)_debugDescriptionWithMomentNode:(id)arg1;
- (id)init;

@end


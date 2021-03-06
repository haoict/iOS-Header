//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CustomPOIAnnotation-Protocol.h"
#import "MKCustomFeatureAnnotation-Protocol.h"

@class GEOFeatureStyleAttributes, NSSet, NSString, PersonalizedCompoundItem, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface POIAnnotation : NSObject <MKCustomFeatureAnnotation, CustomPOIAnnotation>
{
    CDStruct_2c43369c _coordinate;
    VKCustomFeature *_customFeature;
    _Bool _featureGivenToVectorKit;
    NSString *_text;
    NSString *_textLocale;
    NSString *_subtext;
    NSString *_subtextLocale;
    GEOFeatureStyleAttributes *_styleAttributes;
    unsigned long long _sortOrder;
    _Bool _showsBalloonCallout;
    _Bool _isLabelPOI;
    _Bool _isVenueOrBuilding;
    PersonalizedCompoundItem *_compoundItem;
    unsigned long long _presentationAttributesHash;
}

@property(readonly, nonatomic) unsigned long long presentationAttributesHash; // @synthesize presentationAttributesHash=_presentationAttributesHash;
@property(readonly, nonatomic) PersonalizedCompoundItem *compoundItem; // @synthesize compoundItem=_compoundItem;
@property(readonly, nonatomic) _Bool isVenueOrBuilding; // @synthesize isVenueOrBuilding=_isVenueOrBuilding;
@property(readonly, nonatomic) _Bool isLabelPOI; // @synthesize isLabelPOI=_isLabelPOI;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtext;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_text;
@property(readonly, nonatomic) _Bool showsBalloonCallout; // @synthesize showsBalloonCallout=_showsBalloonCallout;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)debugDictionary;
- (id)personalizedItem;
@property(readonly, nonatomic) NSSet *keys;
- (id)styleAttributes;
- (id)address;
- (id)sourceLabelMarker;
- (id)searchResult;
- (id)parkedCar;
- (id)mapItem;
- (id)feature;
- (id)initWithItem:(id)arg1 defaultLocale:(id)arg2;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


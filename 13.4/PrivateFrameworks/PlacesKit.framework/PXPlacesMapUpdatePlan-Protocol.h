//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlacesKit/PXPlacesMapPipelineComponent-Protocol.h>

@protocol MKAnnotation, PXPlacesMapLayoutItem, PXPlacesMapLayoutResult, PXPlacesMapUpdatePlanResult;

@protocol PXPlacesMapUpdatePlan <PXPlacesMapPipelineComponent>
- (void)reset;
- (id <MKAnnotation>)annotationForLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
- (id <PXPlacesMapUpdatePlanResult>)removalPlanResult;
- (id <PXPlacesMapUpdatePlanResult>)resultForNewLayoutResult:(id <PXPlacesMapLayoutResult>)arg1;
@end


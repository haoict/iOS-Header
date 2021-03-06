//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class ARBody2D, ARCamera, ARFaceData, ARFrameTimingData, ARLightEstimate, ARLineCloud, ARPointCloud, ARRawSceneUnderstandingData, ARVideoFormat, ARWorldTrackingErrorData, ARWorldTrackingState, AVDepthData, NSArray, NSDate;
@protocol MTLTexture;

@interface ARFrame : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _transformFlags;
    _Bool _shouldRestrictFrameRate;
    float _cameraGrainIntensity;
    float _imageNoiseIntensity;
    struct __CVBuffer *_segmentationBuffer;
    struct __CVBuffer *_capturedImage;
    id <MTLTexture> _cameraGrainTexture;
    double _timestamp;
    AVDepthData *_capturedDepthData;
    double _capturedDepthDataTimestamp;
    ARCamera *_camera;
    NSArray *_anchors;
    ARLightEstimate *_lightEstimate;
    long long _worldMappingStatus;
    struct __CVBuffer *_estimatedDepthData;
    double _currentCaptureTimestamp;
    ARPointCloud *_featurePoints;
    ARPointCloud *_referenceFeaturePoints;
    NSArray *_cachedPointClouds;
    long long _worldAlignment;
    ARFrameTimingData *_timingData;
    ARWorldTrackingErrorData *_worldTrackingErrorData;
    ARLineCloud *_worldTrackingLineCloud;
    ARWorldTrackingState *_worldTrackingState;
    long long _renderFramesPerSecond;
    NSDate *_captureDate;
    ARRawSceneUnderstandingData *_rawSceneUnderstandingData;
    double _estimatedLuminance;
    NSArray *_resultDatas;
    long long _deviceOrientation;
    struct __CVBuffer *_downSampledMattingPixelBuffer;
    struct __CVBuffer *_mattingScaleImagePixelBuffer;
    NSArray *_detectedBodies;
    ARFaceData *_faceData;
    ARVideoFormat *_currentlyActiveVideoFormat;
    id <MTLTexture> _imageNoiseTexture;
    // Error parsing type: {?="columns"[4]}, name: _referenceOriginTransform
    // Error parsing type: {?="columns"[4]}, name: _referenceOriginDelta
    // Error parsing type: {?="columns"[4]}, name: _sessionOriginTransform
    // Error parsing type: {?="columns"[4]}, name: _worldAlignmentTransform
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) float imageNoiseIntensity; // @synthesize imageNoiseIntensity=_imageNoiseIntensity;
@property(retain, nonatomic) id <MTLTexture> imageNoiseTexture; // @synthesize imageNoiseTexture=_imageNoiseTexture;
@property(retain, nonatomic) ARVideoFormat *currentlyActiveVideoFormat; // @synthesize currentlyActiveVideoFormat=_currentlyActiveVideoFormat;
@property(retain, nonatomic) ARFaceData *faceData; // @synthesize faceData=_faceData;
@property(copy, nonatomic) NSArray *detectedBodies; // @synthesize detectedBodies=_detectedBodies;
@property(nonatomic) struct __CVBuffer *mattingScaleImagePixelBuffer; // @synthesize mattingScaleImagePixelBuffer=_mattingScaleImagePixelBuffer;
@property(nonatomic) struct __CVBuffer *downSampledMattingPixelBuffer; // @synthesize downSampledMattingPixelBuffer=_downSampledMattingPixelBuffer;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(copy, nonatomic) NSArray *resultDatas; // @synthesize resultDatas=_resultDatas;
@property(nonatomic) double estimatedLuminance; // @synthesize estimatedLuminance=_estimatedLuminance;
@property(retain, nonatomic) ARRawSceneUnderstandingData *rawSceneUnderstandingData; // @synthesize rawSceneUnderstandingData=_rawSceneUnderstandingData;
@property(retain, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(nonatomic) _Bool shouldRestrictFrameRate; // @synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate;
@property(nonatomic) long long renderFramesPerSecond; // @synthesize renderFramesPerSecond=_renderFramesPerSecond;
@property(retain, nonatomic) ARWorldTrackingState *worldTrackingState; // @synthesize worldTrackingState=_worldTrackingState;
@property(retain, nonatomic) ARLineCloud *worldTrackingLineCloud; // @synthesize worldTrackingLineCloud=_worldTrackingLineCloud;
@property(retain, nonatomic) ARWorldTrackingErrorData *worldTrackingErrorData; // @synthesize worldTrackingErrorData=_worldTrackingErrorData;
@property(retain, nonatomic) ARFrameTimingData *timingData; // @synthesize timingData=_timingData;
@property(nonatomic) long long worldAlignment; // @synthesize worldAlignment=_worldAlignment;
// Error parsing type for property worldAlignmentTransform:
// Property attributes: T{?=[4]},N,V_worldAlignmentTransform

// Error parsing type for property sessionOriginTransform:
// Property attributes: T{?=[4]},N,V_sessionOriginTransform

// Error parsing type for property referenceOriginDelta:
// Property attributes: T{?=[4]},N,V_referenceOriginDelta

// Error parsing type for property referenceOriginTransform:
// Property attributes: T{?=[4]},N,V_referenceOriginTransform

@property(retain, nonatomic) NSArray *cachedPointClouds; // @synthesize cachedPointClouds=_cachedPointClouds;
@property(retain, nonatomic) ARPointCloud *referenceFeaturePoints; // @synthesize referenceFeaturePoints=_referenceFeaturePoints;
@property(retain, nonatomic) ARPointCloud *featurePoints; // @synthesize featurePoints=_featurePoints;
@property(readonly, nonatomic) double currentCaptureTimestamp; // @synthesize currentCaptureTimestamp=_currentCaptureTimestamp;
@property(nonatomic) struct __CVBuffer *estimatedDepthData; // @synthesize estimatedDepthData=_estimatedDepthData;
@property(nonatomic) long long worldMappingStatus; // @synthesize worldMappingStatus=_worldMappingStatus;
@property(retain, nonatomic) ARLightEstimate *lightEstimate; // @synthesize lightEstimate=_lightEstimate;
@property(copy, nonatomic) NSArray *anchors; // @synthesize anchors=_anchors;
@property(readonly, copy, nonatomic) ARCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) double capturedDepthDataTimestamp; // @synthesize capturedDepthDataTimestamp=_capturedDepthDataTimestamp;
@property(retain, nonatomic) AVDepthData *capturedDepthData; // @synthesize capturedDepthData=_capturedDepthData;
@property(readonly, nonatomic) float cameraGrainIntensity; // @synthesize cameraGrainIntensity=_cameraGrainIntensity;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) id <MTLTexture> cameraGrainTexture; // @synthesize cameraGrainTexture=_cameraGrainTexture;
@property(nonatomic) struct __CVBuffer *capturedImage; // @synthesize capturedImage=_capturedImage;
@property(nonatomic) struct __CVBuffer *segmentationBuffer; // @synthesize segmentationBuffer=_segmentationBuffer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_hitTestEstimatedPlanesFromOrigin:(long long)arg1 withDirection:planeAlignment: /* Error: Ran out of types for this method. */;
- (id)_horizontalPlaneEstimateFromFeaturePoint:fromOrigin:withDirection: /* Error: Ran out of types for this method. */;
- (id)_hitTestFromOrigin:(unsigned long long)arg1 withDirection:types: /* Error: Ran out of types for this method. */;
- (_Bool)useHittestRaycasting;
-     // Error parsing type: {?=[4]}16@0:8, name: gravityAlignedReferenceOriginTransform
- (_Bool)worldAlignmentTransformAvailable;
- (_Bool)sessionOriginTransformAvailable;
- (_Bool)referenceOriginDeltaAvailable;
- (void)setReferenceOriginChanged:(_Bool)arg1;
- (_Bool)referenceOriginChanged;
- (void)setReferenceOriginTransformUpdated:(_Bool)arg1;
- (_Bool)referenceOriginTransformUpdated;
- (_Bool)referenceOriginTransformAvailable;
- (void)_updatePredicted:(_Bool)arg1;
@property(readonly, nonatomic) ARPointCloud *rawFeaturePoints;
- (struct CGAffineTransform)displayTransformForOrientation:(long long)arg1 viewportSize:(struct CGSize)arg2;
- (id)raycastQueryFromPoint:(struct CGPoint)arg1 allowingTarget:(long long)arg2 alignment:(long long)arg3;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
-     // Error parsing type: 32@0:8{CGPoint=dd}16, name: transformPointToNDCSpace:
- (void)dealloc;
@property(readonly, nonatomic) ARBody2D *detectedBody;
- (void)setPredictedTimestamp:(double)arg1;
- (id)initWithTimestampAndNoContext:(double)arg1;
- (id)initWithTimestamp:(double)arg1 context:(id)arg2;
- (id)initWithCamera:(id)arg1 timestamp:(double)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoEditSupport/AutoEncodeDecodeObject.h>

#import <PhotoEditSupport/NSSecureCoding-Protocol.h>

@class NSMutableData;

@interface BLBrushStroke : AutoEncodeDecodeObject <NSSecureCoding>
{
    _Bool _erase;
    _Bool _magicEdges;
    _Bool _startPointSet;
    int _type;
    int _destinationWidth;
    float _opacity;
    float _size;
    float _softness;
    double _timestamp;
    NSMutableData *_offsets;
    struct CGPoint _startPoint;
    struct CGPoint _lastPoint;
    struct CGRect _strokeRect;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGRect strokeRect; // @synthesize strokeRect=_strokeRect;
@property(retain, nonatomic) NSMutableData *offsets; // @synthesize offsets=_offsets;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) _Bool startPointSet; // @synthesize startPointSet=_startPointSet;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) float softness; // @synthesize softness=_softness;
@property(nonatomic) float size; // @synthesize size=_size;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool magicEdges; // @synthesize magicEdges=_magicEdges;
@property(nonatomic) _Bool erase; // @synthesize erase=_erase;
@property(nonatomic) int destinationWidth; // @synthesize destinationWidth=_destinationWidth;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)init;
- (int)numberOfPoints;
- (void)replayPointsWithScale:(float)arg1 pointBlock:(CDUnknownBlockType)arg2;
- (void)addPoint:(struct CGPoint)arg1;
- (id)keysToEncode;

@end


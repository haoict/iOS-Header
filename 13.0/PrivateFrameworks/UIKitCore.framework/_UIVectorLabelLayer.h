//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>
#import <UIKitCore/CALayerDelegate-Protocol.h>

@class NSArray, NSString, _UIVectorTextLayout;

__attribute__((visibility("hidden")))
@interface _UIVectorLabelLayer : CALayer <CALayerDelegate, CAAnimationDelegate>
{
    NSArray *_currentLayers;
    _UIVectorTextLayout *_currentTextLayout;
    unsigned long long _maxRenderedMoveDistance;
}

+ (void)initialize;
@property(nonatomic) unsigned long long maxRenderedMoveDistance; // @synthesize maxRenderedMoveDistance=_maxRenderedMoveDistance;
- (void).cxx_destruct;
- (id)_layersForTextLayout:(id)arg1;
- (id)_findSimilarLayer:(id)arg1 inLayers:(id)arg2;
- (_Bool)_isPathCompatible:(struct CGPath *)arg1 with:(struct CGPath *)arg2;
- (void)_transitionWithSetup:(CDUnknownBlockType)arg1 target:(CDUnknownBlockType)arg2;
- (void)_applyTextLayoutChangeFrom:(id)arg1 to:(id)arg2;
- (void)_cleanupUnusedLayers;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) _UIVectorTextLayout *textLayout; // @dynamic textLayout;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/NSObject-Protocol.h>

@class CHVisualization;

@protocol CHVisualizationDelegate <NSObject>
- (void)visualizationNeedsDisplay:(CHVisualization *)arg1;
- (void)visualization:(CHVisualization *)arg1 needsDisplayInRect:(struct CGRect)arg2;
@end


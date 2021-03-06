//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface OFUIWindowDraggingGestureRecognizer : UIGestureRecognizer
{
    _Bool _allowDragging;
    struct CGPoint _initialPoint;
}

@property(readonly, nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_stopDraggingIfNecessary:(_Bool)arg1;
- (void)_beginDraggingIfNecessary;
@property(readonly, nonatomic) struct CGPoint translation;
- (void)cancelDragging;
- (void)beginDragging;
- (void)reset;

@end


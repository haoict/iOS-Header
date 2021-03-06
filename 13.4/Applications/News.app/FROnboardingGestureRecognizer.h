//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSDate;

@interface FROnboardingGestureRecognizer : UIGestureRecognizer
{
    NSDate *_gesturedStatedOn;
    struct CGPoint _startingPoint;
    struct CGPoint _startingPointInWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *gesturedStatedOn; // @synthesize gesturedStatedOn=_gesturedStatedOn;
@property(nonatomic) struct CGPoint startingPointInWindow; // @synthesize startingPointInWindow=_startingPointInWindow;
@property(nonatomic) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;
- (void)cancel;
@property(readonly, nonatomic) double timeSinceGestureStarted;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)reset;

@end


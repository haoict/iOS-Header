//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUState, NSArray, NSMutableArray, NSPointerArray;

@interface CUStateMachine : NSObject
{
    CUState *_currentState;
    NSMutableArray *_eventQueue;
    _Bool _dispatching;
    NSPointerArray *_lcaPath;
    _Bool _started;
    CUState *_targetState;
    CUState *_initialState;
    NSArray *_states;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *states; // @synthesize states=_states;
@property(retain, nonatomic) CUState *initialState; // @synthesize initialState=_initialState;
- (void)_firstTimeInit;
- (void)transitionToState:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (void)invalidate;
- (void)start;
- (void)dealloc;

@end


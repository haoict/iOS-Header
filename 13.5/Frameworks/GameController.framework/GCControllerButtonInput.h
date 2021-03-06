//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerElement.h>

@class NSString;

@interface GCControllerButtonInput : GCControllerElement
{
    NSString *_descriptionName;
    int _pressCounter;
    _Bool _nonAnalog;
    float _value;
    CDUnknownBlockType _valueChangedHandler;
    CDUnknownBlockType _pressedChangedHandler;
}

- (void).cxx_destruct;
@property _Bool nonAnalog; // @synthesize nonAnalog=_nonAnalog;
@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType pressedChangedHandler; // @synthesize pressedChangedHandler=_pressedChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
- (void)setValue:(float)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isPressed) _Bool pressed;
- (int)getAndResetTimesPressed;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (_Bool)_setValue:(float)arg1;
- (_Bool)isAnalog;
- (id)initWithDescriptionName:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PassThroughView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface CarFocusGuideDebugView : PassThroughView
{
    unsigned long long _direction;
    UILabel *_directionLabel;
}

- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (id)_colorForDirection:(unsigned long long)arg1;
- (void)_updateColors;
- (id)initWithDirection:(unsigned long long)arg1;

@end


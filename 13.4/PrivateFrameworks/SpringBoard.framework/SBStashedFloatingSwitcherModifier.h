//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBActiveAppLayoutFloatingSwitcherModifier;

@interface SBStashedFloatingSwitcherModifier : SBSwitcherModifier
{
    SBActiveAppLayoutFloatingSwitcherModifier *_activeModifier;
}

- (void).cxx_destruct;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (id)init;

@end


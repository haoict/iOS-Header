//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SXComponent><SXInsertableComponent, SXComponentLayout;

@interface SXComponentInsert : NSObject
{
    id <SXComponent><SXInsertableComponent> _component;
    id <SXComponentLayout> _componentLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXComponentLayout> componentLayout; // @synthesize componentLayout=_componentLayout;
@property(readonly, nonatomic) id <SXComponent><SXInsertableComponent> component; // @synthesize component=_component;
- (id)description;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2;

@end


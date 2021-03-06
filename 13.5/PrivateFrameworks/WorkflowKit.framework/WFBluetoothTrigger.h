//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFBluetoothTrigger : WFTrigger
{
    NSArray *_selectedDevices;
    unsigned long long _selection;
}

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selection; // @synthesize selection=_selection;
@property(retain, nonatomic) NSArray *selectedDevices; // @synthesize selectedDevices=_selectedDevices;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (_Bool)hasValidConfiguration;
- (id)init;

@end


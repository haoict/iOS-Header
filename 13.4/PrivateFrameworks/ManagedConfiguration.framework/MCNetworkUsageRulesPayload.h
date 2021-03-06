//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload
{
    NSArray *_applicationRules;
    NSArray *_SIMRules;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *SIMRules; // @synthesize SIMRules=_SIMRules;
@property(copy, nonatomic) NSArray *applicationRules; // @synthesize applicationRules=_applicationRules;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end


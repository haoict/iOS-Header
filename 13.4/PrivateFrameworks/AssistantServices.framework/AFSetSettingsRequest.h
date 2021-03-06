//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest
{
    NSArray *_settings;
    _Bool _applyChanges;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setApplyChanges:) _Bool applyChanges; // @synthesize applyChanges=_applyChanges;
@property(copy, nonatomic, setter=_setSettings:) NSArray *settings; // @synthesize settings=_settings;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponseWithSettingChanges:(id)arg1;
- (id)createResponse;

@end


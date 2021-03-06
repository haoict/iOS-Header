//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>

@class IPAAdjustmentVersion, NSDictionary, NSString;

@interface IPAAdjustment : NSObject <NSCopying>
{
    NSString *_identifier;
    IPAAdjustmentVersion *_version;
    NSDictionary *_settings;
}

@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) IPAAdjustmentVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToAdjustment:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


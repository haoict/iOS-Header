//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NTKPhotoAnalysis;

@interface NTKPhotoAnalysisCacheEntry : NSObject <NSSecureCoding>
{
    NTKPhotoAnalysis *_analysis;
    int _sequenceNumber;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NTKPhotoAnalysis *analysis; // @synthesize analysis=_analysis;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


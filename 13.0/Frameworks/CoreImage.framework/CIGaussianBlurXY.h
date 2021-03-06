//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGaussianBlurXY : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSigmaX;
    NSNumber *inputSigmaY;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputSigmaY; // @synthesize inputSigmaY;
@property(retain, nonatomic) NSNumber *inputSigmaX; // @synthesize inputSigmaX;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageMultiVectorGlyphContent : _UIImageContent
{
    NSArray *_glyphs;
    NSArray *_colors;
    NSArray *_offsets;
    NSArray *_scaleFactors;
    struct CGSize _sizeInPixels;
    struct CGPoint _anchorPoint;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (double)vectorScale;
- (struct CGSize)sizeInPixels;
- (_Bool)isVectorGlyph;
- (_Bool)canProvideFullResCGImage;
- (_Bool)canProvideCGImage;
- (_Bool)isCGImage;
- (id)initWithScale:(double)arg1;
- (id)initWithSize:(struct CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(struct CGPoint)arg6;

@end


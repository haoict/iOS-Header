//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDFAnnotation, PDFPage, PDFPageView, PDFView;

__attribute__((visibility("hidden")))
@interface PDFPageViewAnnotationControllerPrivate : NSObject
{
    PDFPageView *pageView;
    PDFPage *page;
    PDFView *view;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *activeControls;
}

- (void).cxx_destruct;

@end


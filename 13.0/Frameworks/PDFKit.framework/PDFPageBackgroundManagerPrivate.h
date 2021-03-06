//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDFRenderingProperties;
@protocol OS_dispatch_queue, PDFPageBackgroundManagerDelegate;

__attribute__((visibility("hidden")))
@interface PDFPageBackgroundManagerPrivate : NSObject
{
    id <PDFPageBackgroundManagerDelegate> documentDelegate;
    PDFRenderingProperties *renderingProperties;
    unsigned long long activePageIndex;
    NSMutableDictionary *backgroundImageCache[3];
    NSObject<OS_dispatch_queue> *workQueue;
    _Bool isCancled;
    _Bool isWorking;
    _Bool willForceUpdate;
}

- (void).cxx_destruct;

@end


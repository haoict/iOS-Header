//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadgetTransition-Protocol.h>

@class NSString, PXOneUpPresentation;
@protocol PXGridPresentation;

@interface PXUIGadgetTransition : NSObject <PXGadgetTransition>
{
    PXOneUpPresentation *_oneUpPresentation;
    id <PXGridPresentation> _gridPresentation;
}

@property(readonly, nonatomic) id <PXGridPresentation> gridPresentation; // @synthesize gridPresentation=_gridPresentation;
@property(readonly, nonatomic) PXOneUpPresentation *oneUpPresentation; // @synthesize oneUpPresentation=_oneUpPresentation;
- (void).cxx_destruct;
- (id)initWithOneUpPresentation:(id)arg1 gridPresentation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


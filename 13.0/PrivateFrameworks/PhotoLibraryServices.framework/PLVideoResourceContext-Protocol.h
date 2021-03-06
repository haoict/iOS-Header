//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray;
@protocol PLVideoResource;

@protocol PLVideoResourceContext <NSObject>
- (void)repairResource:(id <PLVideoResource>)arg1;
- (_Bool)validateResource:(id <PLVideoResource>)arg1;
- (id <PLVideoResource>)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (NSArray *)videoResourcesMatchingVersions:(NSArray *)arg1;
- (double)sizeThresholdForHighQuality;
@end


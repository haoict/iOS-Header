//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PLPlatformLibraryServicesDelegate.h"

@interface PLIOSPlatformLibraryServicesDelegate : PLPlatformLibraryServicesDelegate
{
    _Bool _preparedForOTARestore;
}

@property(nonatomic, getter=isPreparedForOTARestore) _Bool preparedForOTARestore; // @synthesize preparedForOTARestore=_preparedForOTARestore;
- (id)commonBuiltInOperations;
- (id)systemLibraryBuiltInOperations;
- (_Bool)_preventRebuild;

@end


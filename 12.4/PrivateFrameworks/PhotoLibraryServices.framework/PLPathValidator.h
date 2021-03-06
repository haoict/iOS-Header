//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PLFileUtilities;
@protocol PLFileManager;

@interface PLPathValidator : NSObject
{
    NSString *_dcimDirectory;
    NSString *_photoDataDirectory;
    PLFileUtilities *_fileUtilities;
    id <PLFileManager> _fileManager;
}

- (void).cxx_destruct;
- (_Bool)_path:(id)arg1 hasRealFilePrefix:(id)arg2;
- (_Bool)_isFacesMetadataFile:(id)arg1;
- (_Bool)_isChangeStoreDatabaseFile:(id)arg1;
- (_Bool)_isPhotosDatabaseFile:(id)arg1;
- (_Bool)_isValidRealResourcePath:(id)arg1;
- (_Bool)isValidResourcePath:(id)arg1;
- (id)initWithDcimDirectory:(id)arg1 photoDataDirectory:(id)arg2 fileUtilities:(id)arg3 fileManager:(id)arg4;
- (id)initWithPathManager:(id)arg1;

@end


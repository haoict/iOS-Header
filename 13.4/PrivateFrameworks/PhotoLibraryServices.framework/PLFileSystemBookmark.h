//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSString, NSURL, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject
{
    NSURL *_fileSystemURL;
}

+ (id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2;
+ (id)entityName;
- (void).cxx_destruct;
- (id)fileSystemURL;
- (_Bool)supportsCloudUpload;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(retain, nonatomic) NSData *bookmarkData; // @dynamic bookmarkData;
@property(retain, nonatomic) NSString *pathRelativeToVolume; // @dynamic pathRelativeToVolume;
@property(retain, nonatomic) PLInternalResource *resource; // @dynamic resource;

@end


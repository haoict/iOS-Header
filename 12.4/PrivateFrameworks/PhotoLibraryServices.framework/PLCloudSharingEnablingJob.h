//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingEnablingJob : PLCloudSharingJob
{
    _Bool _enableSharing;
}

+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(_Bool)arg2 withReason:(id)arg3;
+ (void)enableCloudSharing:(_Bool)arg1;
@property(nonatomic) _Bool enableSharing; // @synthesize enableSharing=_enableSharing;
- (void)runDaemonSide;
- (_Bool)shouldArchiveXPCToDisk;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface MCMMigrationStatus : NSObject
{
    NSMutableDictionary *_migrationInfo;
    NSURL *_migrationFileURL;
}

+ (id)currentBuildVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *migrationFileURL; // @synthesize migrationFileURL=_migrationFileURL;
@property(retain, nonatomic) NSMutableDictionary *migrationInfo; // @synthesize migrationInfo=_migrationInfo;
- (_Bool)isBuildUpgrade;
- (void)writeCurrentBuildInfoToDisk;
- (void)setMigrationCompleteForType:(id)arg1;
- (_Bool)hasMigrationOccurredForType:(id)arg1;
- (_Bool)_writeMigrationStatusToDisk;
- (id)_readMigrationStatusFromDisk;
- (void)_migrateFromManyMarkerFilesToOne;
- (void)_removeMarkerFileWithName:(id)arg1;
- (void)_readStatusFromMarkerFileWithName:(id)arg1 andSetAsType:(id)arg2;
- (id)init;
- (id)initForMobileUserMigration;
- (id)initForSystemMigration;

@end


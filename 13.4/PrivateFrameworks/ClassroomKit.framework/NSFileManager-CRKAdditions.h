//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CRKAdditions)
+ (id)crk_computeNonContainerizedHomeDirectoryURL;
+ (id)crk_nonContainerizedHomeDirectoryURL;
- (id)crk_collisionAvoidingURLForURL:(id)arg1;
- (id)crk_deepContentsOfDirectoryAtPath:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)crk_safeRemoveItemAtURL:(id)arg1 error:(id *)arg2;
@property(readonly) _Bool crk_isStudentdInstalled;
@end


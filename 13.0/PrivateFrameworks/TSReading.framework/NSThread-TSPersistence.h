//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@interface NSThread (TSPersistence)
+ (void)tsp_performSynchronousOperationMarkingThreadWithKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)tsp_hasReadFileAccess;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)tsp_isArchiverThread;
@end


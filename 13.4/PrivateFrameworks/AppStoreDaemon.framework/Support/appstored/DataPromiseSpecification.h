//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface DataPromiseSpecification : NSObject <NSCopying>
{
    unsigned long long _archiveSize;
    unsigned long long _diskSpaceNeeded;
    NSString *_name;
    long long _promiseType;
    NSNumber *_referenceID;
    NSDictionary *_streamingZipOptions;
    NSString *_transferPath;
}

- (void).cxx_destruct;
@property(copy) NSString *transferPath; // @synthesize transferPath=_transferPath;
@property(copy) NSDictionary *streamingZipOptions; // @synthesize streamingZipOptions=_streamingZipOptions;
@property(retain) NSNumber *referenceID; // @synthesize referenceID=_referenceID;
@property long long promiseType; // @synthesize promiseType=_promiseType;
@property(copy) NSString *name; // @synthesize name=_name;
@property unsigned long long diskSpaceNeeded; // @synthesize diskSpaceNeeded=_diskSpaceNeeded;
@property unsigned long long archiveSize; // @synthesize archiveSize=_archiveSize;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


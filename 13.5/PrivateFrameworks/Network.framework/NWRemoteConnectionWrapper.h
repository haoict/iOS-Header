//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, NWConnection;

__attribute__((visibility("hidden")))
@interface NWRemoteConnectionWrapper : NSObject
{
    NSUUID *_clientID;
    NWConnection *_connection;
}

- (void).cxx_destruct;
@property(retain) NWConnection *connection; // @synthesize connection=_connection;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;

@end


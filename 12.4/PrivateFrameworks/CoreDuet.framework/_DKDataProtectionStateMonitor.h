//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _DKDataProtectionMaster;

@interface _DKDataProtectionStateMonitor : NSObject
{
    _DKDataProtectionMaster *_master;
    NSUUID *_handlerUUID;
    CDUnknownBlockType _changeHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (_Bool)isDataAvailableFor:(id)arg1;
- (void)dealloc;
- (id)init;

@end


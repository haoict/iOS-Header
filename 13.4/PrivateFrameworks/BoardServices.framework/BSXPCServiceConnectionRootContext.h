//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext
{
    unsigned long long _unique;
    // Error parsing type: AQ, name: __uniqueChildCounter
    NSString *_eDesc;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isRoot;
- (id)endpointDescription;
- (id)childContextWithRemoteIdentifier:(unsigned long long)arg1;
- (id)uniqueChildContext;
- (id)_initWithType:(BOOL)arg1 eDesc:(id)arg2;

@end


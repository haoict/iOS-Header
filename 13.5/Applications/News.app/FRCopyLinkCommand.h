//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TUCommandType-Protocol.h"

@class NSString;

@interface FRCopyLinkCommand : NSObject <TUCommandType>
{
    NSString *_url;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSObject *context;
@property(readonly, nonatomic) Class contextClass;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithContext:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NENetworkAgent.h>

@class NSArray;

@interface NEPersonalDNSNetworkAgent : NENetworkAgent
{
    NSArray *_settings;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
- (void).cxx_destruct;
@property(retain) NSArray *settings; // @synthesize settings=_settings;
- (id)copyAgentData;

@end


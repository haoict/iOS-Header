//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexWeb/NSObject-Protocol.h>

@protocol SWScript;

@protocol SWScriptsManager <NSObject>
- (void)executeScript:(id <SWScript>)arg1;
- (void)removeScript:(id <SWScript>)arg1;
- (void)removeAllScripts;
- (void)addScript:(id <SWScript>)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXDOM;
@protocol SXDOMModificationContext;

@protocol SXDOMModifying <NSObject>
- (SXDOM *)modifyDOM:(SXDOM *)arg1 context:(id <SXDOMModificationContext>)arg2;
@end


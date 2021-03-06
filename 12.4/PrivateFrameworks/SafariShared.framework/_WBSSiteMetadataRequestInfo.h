//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperation;
@protocol WBSSiteMetadataProvider;

@interface _WBSSiteMetadataRequestInfo : NSObject
{
    id <WBSSiteMetadataProvider> _provider;
    NSMutableSet *_tokens;
    NSOperation *_operation;
}

@property(nonatomic) __weak NSOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) NSMutableSet *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) id <WBSSiteMetadataProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;

@end


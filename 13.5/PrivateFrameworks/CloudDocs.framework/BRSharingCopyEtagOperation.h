//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyEtagOperation : BROperation
{
    NSURL *_fileURL;
    CDUnknownBlockType _sharingEtagCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType sharingEtagCompletionBlock; // @synthesize sharingEtagCompletionBlock=_sharingEtagCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AccountEvent;

@interface AccountActiveTime : NSObject
{
    AccountEvent *_event;
    double _start;
    double _end;
}

- (void).cxx_destruct;
@property double end; // @synthesize end=_end;
@property double start; // @synthesize start=_start;
@property(copy) AccountEvent *event; // @synthesize event=_event;
- (id)diagnosticDescription;
- (id)description;

@end


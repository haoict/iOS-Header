//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/WebEvent.h>

@class UIEvent;

__attribute__((visibility("hidden")))
@interface WKWebEvent : WebEvent
{
    struct RetainPtr<UIEvent> _uiEvent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UIEvent *uiEvent;
- (id)initWithEvent:(id)arg1;

@end


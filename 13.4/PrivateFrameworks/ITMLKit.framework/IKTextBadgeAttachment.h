//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment
{
    IKBadgeElement *_badge;
    IKColor *_tintColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IKColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) __weak IKBadgeElement *badge; // @synthesize badge=_badge;
- (id)initWithBadgeElement:(id)arg1;

@end


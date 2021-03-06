//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIView;
@protocol NSObject;

@interface UIPointerRegion : NSObject <NSCopying>
{
    id <NSObject> _identifier;
    unsigned long long _generationID;
    UIView *_referenceView;
    struct CGRect _rect;
}

+ (id)regionWithRect:(struct CGRect)arg1 identifier:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(nonatomic) unsigned long long generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) id <NSObject> identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


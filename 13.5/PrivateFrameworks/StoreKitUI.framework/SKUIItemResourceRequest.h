//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIResourceRequest.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSString;
@protocol SKUIItemRequestDelegate;

@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying>
{
    id <SKUIItemRequestDelegate> _delegate;
    NSString *_imageProfile;
    NSArray *_itemIdentifiers;
    NSString *_keyProfile;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property(copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(copy, nonatomic) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property(nonatomic) __weak id <SKUIItemRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSItemProviderWriting-Protocol.h>

@class NSArray, NSProgress, NSString, UIItemProvider;

@protocol UIItemProviderWriting <NSItemProviderWriting>
- (NSProgress *)loadDataWithTypeIdentifier:(NSString *)arg1 forItemProviderCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
+ (NSArray *)writableTypeIdentifiersForItemProvider;
- (void)registerLoadHandlersToItemProvider:(UIItemProvider *)arg1;
@end


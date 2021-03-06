//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <Messages/_MSMessageComposeExtensionImplProtocol-Protocol.h>

@class MSConversation, NSString, UIViewController;
@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;

@interface _MSMessageAppExtensionContext : NSExtensionContext <_MSMessageComposeExtensionImplProtocol>
{
    id <_MSMessageComposeHostImplProtocol> _hostContext;
    unsigned long long _presentationStyle;
    unsigned long long _presentationContext;
    id <_MSMessageComposeExtensionImplProtocol> _containingContext;
    MSConversation *_activeConversation;
    struct __CFRunLoopObserver *_principalObjectCreationObserver;
    struct CGRect _initialFrameOfHostView;
}

+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CFRunLoopObserver *principalObjectCreationObserver; // @synthesize principalObjectCreationObserver=_principalObjectCreationObserver;
@property(readonly, nonatomic) struct CGRect initialFrameOfHostView; // @synthesize initialFrameOfHostView=_initialFrameOfHostView;
@property(retain, nonatomic) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> containingContext; // @synthesize containingContext=_containingContext;
@property(nonatomic) unsigned long long presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) id <_MSMessageComposeHostImplProtocol> hostContext; // @synthesize hostContext=_hostContext;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)contentDidLoad;
- (void)requestResize;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_hostDidBeginDeferredTeardown;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)dismissAndPresentPhotosApp;
- (void)dismiss;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)remoteProxy;
- (void)_volumeButtonPressed:(_Bool)arg1;
- (void)_prepareForPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)arg1;
- (void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentationDidChangeToPresentationState:(id)arg1;
- (void)_presentationWillChangeToPresentationState:(id)arg1;
- (void)_conversationDidChangeWithConversationState:(id)arg1;
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;
- (void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resignActive;
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;
- (void)_handlePrincipalObjectCreated;
@property(readonly, nonatomic) __weak UIViewController *stickerViewController;
@property(readonly, nonatomic) __weak UIViewController *viewController;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_uninstallPrincipalObjectObserverIfNeeded;
- (void)_installPrincipalObjectObserver;
- (void)dealloc;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


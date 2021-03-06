//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class DOMElement, DOMHTMLFormElement, DOMHTMLInputElement, DOMHTMLTextAreaElement, NSDictionary, WebFrame;
@protocol WebFormSubmissionListener;

@protocol WebFormDelegate <NSObject>
- (void)willSendSubmitEventToForm:(DOMHTMLFormElement *)arg1 inFrame:(WebFrame *)arg2 withValues:(NSDictionary *)arg3;
- (void)frame:(WebFrame *)arg1 sourceFrame:(WebFrame *)arg2 willSubmitForm:(DOMElement *)arg3 withValues:(NSDictionary *)arg4 submissionListener:(id <WebFormSubmissionListener>)arg5;
- (_Bool)textField:(DOMHTMLInputElement *)arg1 doCommandBySelector:(SEL)arg2 inFrame:(WebFrame *)arg3;
- (void)didFocusTextField:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textDidChangeInTextArea:(DOMHTMLTextAreaElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textDidChangeInTextField:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textFieldDidEndEditing:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textFieldDidBeginEditing:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
@end


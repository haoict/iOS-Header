//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface _AKInsetTextField : UITextField
{
    struct CGSize _insetSize;
}

@property(nonatomic) struct CGSize insetSize; // @synthesize insetSize=_insetSize;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MapsSuggestionsShortcut, UIImageView, UITextField;

__attribute__((visibility("hidden")))
@interface EditTitleTableViewCell : UITableViewCell
{
    UITextField *_textField;
    UIImageView *_imageView;
    MapsSuggestionsShortcut *_shortcut;
}

- (void).cxx_destruct;
- (void)_updateFonts;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)resignResponder;
- (_Bool)makeFirstResponder;
- (id)titleText;
- (void)updateContent;
- (id)initWithShortcut:(id)arg1 delegate:(id)arg2;

@end


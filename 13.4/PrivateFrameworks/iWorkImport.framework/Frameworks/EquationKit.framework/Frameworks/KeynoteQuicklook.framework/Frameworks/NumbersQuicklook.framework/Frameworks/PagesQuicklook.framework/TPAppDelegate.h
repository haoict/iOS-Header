//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TSABaseApplicationDelegate.h>

@interface TPAppDelegate : TSABaseApplicationDelegate
{
    _Bool _appDoneLaunching;
    _Bool _cachedBidiIsSupported;
}

+ (double)defaultFontForNewBasicDocumentsPointSize;
+ (id)defaultFontForNewBasicDocumentsFontName;
+ (id)sharedDelegate;
+ (id)tp_sharedPropertiesProvider;
- (void)p_inputMethodsChanged:(id)arg1;
- (void)p_localeChanged:(id)arg1;
- (id)applicationTemplateVariantsForLocale:(id)arg1;
- (void)registerSOSClassTypeMappings;
- (_Bool)supportsRTL;
- (_Bool)imageGalleryCaptionsUsePlaceholderText;
- (_Bool)supportsLinkedTextBoxes;
- (_Bool)supportsAutosizingTextboxes;
- (id)stringForEquationChoiceUseEQKitButtonTitle;
- (id)stringForEquationChoiceBody;
- (id)stringForEquationChoiceTitle;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;
- (id)equationEditorAPDID;
- (id)appChartPropertyOverrides;
- (id)createCompatibilityDelegate;
- (void)customizeHyperlinkViewController:(id)arg1 documentRoot:(id)arg2;
- (_Bool)isValidURLForImportedHyperlink:(id)arg1 targetDocumentRoot:(id)arg2 forCrossDocumentPaste:(_Bool)arg3;
- (void)dealloc;
- (Class)propertiesProviderClass;
- (Class)documentRootClass;
- (id)init;
- (_Bool)textInspectorShowsMoreSubpane;
- (_Bool)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;

@end


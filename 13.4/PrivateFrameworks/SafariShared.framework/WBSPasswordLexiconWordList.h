//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSPasswordWordList.h>

@interface WBSPasswordLexiconWordList : WBSPasswordWordList
{
    struct _LXLexicon *_lexicon;
}

+ (id)lexiconWordListWithIdentifier:(id)arg1 localeIdentifier:(id)arg2;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 lexicon:(struct _LXLexicon *)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>
#import <TSText/TSWPOffscreenColumn-Protocol.h>

@class NSString;

@interface TSWPTargetHint : NSObject <TSWPOffscreenColumn, NSCopying>
{
    _Bool _usedParagraphHeights;
    _Bool _endOfLayout;
    _Bool _lastLineIsEmptyAndHasListLabel;
    _Bool _textIsVertical;
    _Bool _terminatedByBreak;
    unsigned long long _nextWidowPullsDownFromCharIndex;
    unsigned long long _columnCount;
    unsigned long long _lineFragmentCount;
    struct _NSRange _range;
    struct _NSRange _anchoredRange;
    struct CGRect _frameBounds;
}

@property(nonatomic) _Bool terminatedByBreak; // @synthesize terminatedByBreak=_terminatedByBreak;
@property(nonatomic) _Bool textIsVertical; // @synthesize textIsVertical=_textIsVertical;
@property(nonatomic) _Bool lastLineIsEmptyAndHasListLabel; // @synthesize lastLineIsEmptyAndHasListLabel=_lastLineIsEmptyAndHasListLabel;
@property(nonatomic) _Bool endOfLayout; // @synthesize endOfLayout=_endOfLayout;
@property(nonatomic) _Bool usedParagraphHeights; // @synthesize usedParagraphHeights=_usedParagraphHeights;
@property(nonatomic) unsigned long long lineFragmentCount; // @synthesize lineFragmentCount=_lineFragmentCount;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) struct _NSRange anchoredRange; // @synthesize anchoredRange=_anchoredRange;
@property(nonatomic) unsigned long long nextWidowPullsDownFromCharIndex; // @synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) struct CGRect frameBounds; // @synthesize frameBounds=_frameBounds;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


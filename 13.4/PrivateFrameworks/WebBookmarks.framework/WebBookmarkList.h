//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WebBookmarkCollection, WebBookmarkListQuery;

@interface WebBookmarkList : NSObject
{
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    WebBookmarkListQuery *_query;
    WebBookmarkCollection *_collection;
}

- (void).cxx_destruct;
- (id)differenceFromList:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)_loadBookmarksForDifferenceFromList:(id)arg1;
- (id)_arrayForDifferenceCalculation;
@property(readonly, nonatomic) int folderID;
- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (id)bookmarkArray;
- (unsigned int)bookmarkCount;
- (id)_bookmarkAtIndex:(unsigned int)arg1 paginate:(_Bool)arg2;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)initWithQuery:(id)arg1 skipOffset:(unsigned int)arg2 collection:(id)arg3;

@end


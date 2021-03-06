//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NPSManager, NSArray, NSString, WRReplyStoreInfo;

@interface WRCannedRepliesStore : NSObject
{
    unsigned long long _category;
    WRReplyStoreInfo *_info;
    NSString *_cachedLanguage;
    NSArray *_cachedLocalizedReplies;
    NSArray *_cannedReplies;
    _Bool _didLocalizeDefaultReplies;
    _Bool _didMigrationCheck;
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_npsManager;
}

+ (id)supportedLanguages;
+ (_Bool)supportsEnhancedEditing;
- (void).cxx_destruct;
- (void)handleStoreChange;
- (id)migrateRepliesIfNeeded:(id)arg1;
- (void)saveReplies:(id)arg1;
- (void)invalidateCachesIfNeededForLanguage:(id)arg1;
- (void)localizeDefaultRepliesIfNeeded;
- (void)loadCannedRepliesIfNeeded;
- (id)localizedFormalDefaultReply:(id)arg1;
- (id)localizedDefaultReply:(id)arg1;
- (_Bool)usesFormalReplies;
- (_Bool)supportsSmartReplies;
- (void)setIncludeSmartReplies:(_Bool)arg1;
- (_Bool)includeSmartReplies;
- (void)setCannedReplies:(id)arg1;
- (id)cannedReplies;
- (id)repliesForLanguage:(id)arg1;
- (id)npsManager;
- (id)domainAccessor;
- (id)initWithCategory:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end


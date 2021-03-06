//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendar, EKCalendarDate, EKEventStore, NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue, RemindersListModelDelegate;

@interface RemindersListModel : NSObject
{
    EKEventStore *_eventStore;
    NSMutableSet *_remindersToSave;
    NSMutableArray *_recentlyCheckedReminders;
    NSMutableArray *_recentlyUncheckedReminders;
    NSMutableDictionary *_recentlyUncheckedDates;
    NSMutableArray *_recentlyAddedReminders;
    NSObject<OS_dispatch_queue> *_dataLock;
    NSObject<OS_dispatch_queue> *_faultLock;
    NSMutableArray *_reminders;
    _Bool _hasPerformedFirstReload;
    _Bool _showsCompletedReminders;
    NSMutableIndexSet *_alreadyFaultedIndexes;
    NSMutableIndexSet *_indexesForFaulting;
    struct _NSRange _lastSeenReminderRange;
    unsigned long long _reloadCount;
    _Bool _isPaused;
    _Bool _needsReloadOnResume;
    _Bool _isPausedByForce;
    _Bool _isReloadInProgress;
    _Bool _isListEmpty;
    _Bool _isListEmptyIsValid;
    long long _numberOfIncompleteReminders;
    _Bool _needsReload;
    _Bool _performQuickReload;
    _Bool _allowReloads;
    EKCalendar *_calendar;
    EKCalendarDate *_dueDate;
    id <RemindersListModelDelegate> _delegate;
    long long _numberOfCompletedReminders;
    long long _displayedNumberOfOverdueReminders;
}

@property(readonly) NSArray *recentlyUncheckedReminders; // @synthesize recentlyUncheckedReminders=_recentlyUncheckedReminders;
@property(readonly) NSArray *recentlyCheckedReminders; // @synthesize recentlyCheckedReminders=_recentlyCheckedReminders;
@property(nonatomic) long long displayedNumberOfOverdueReminders; // @synthesize displayedNumberOfOverdueReminders=_displayedNumberOfOverdueReminders;
@property(nonatomic) long long numberOfCompletedReminders; // @synthesize numberOfCompletedReminders=_numberOfCompletedReminders;
@property(nonatomic) _Bool allowReloads; // @synthesize allowReloads=_allowReloads;
@property(nonatomic) _Bool performQuickReload; // @synthesize performQuickReload=_performQuickReload;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) _Bool showsCompletedReminders; // @synthesize showsCompletedReminders=_showsCompletedReminders;
@property(nonatomic) __weak id <RemindersListModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EKCalendarDate *dueDate; // @synthesize dueDate=_dueDate;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSArray *recentlyAddedReminders; // @synthesize recentlyAddedReminders=_recentlyAddedReminders;
- (void).cxx_destruct;
- (id)timeZone;
- (void)moveReminderAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)_reorderReminder:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3;
- (void)_adjustOrderOnReminders:(id)arg1 reverse:(_Bool)arg2;
- (void)_adjustOrderOnReminders:(id)arg1 boundaryOrder:(unsigned long long)arg2 reverse:(_Bool)arg3;
- (void)resume;
- (void)pause;
- (_Bool)isPaused;
- (void)clearRecentlyAddedReminders;
- (void)removeRecentlyAddedReminder:(id)arg1;
- (void)addRecentlyAddedReminder:(id)arg1;
- (_Bool)reminderWasSavedAtIndex:(long long)arg1;
- (_Bool)matchesReminder:(id)arg1;
- (_Bool)deleteReminder:(id)arg1;
- (_Bool)protectedCanReminderBeInserted:(id)arg1;
- (void)_protectedInsertReminder:(id)arg1 atIndex:(long long)arg2;
- (void)protectedRemoveReminderAtIndex:(long long)arg1;
- (_Bool)saveReminderImmediately:(id)arg1;
- (void)saveUnsavedReminders;
- (void)_scheduleSaveForReminder:(id)arg1;
- (void)setPausedByForce:(_Bool)arg1;
- (void)_attemptToResumeReloads;
- (void)addReminder:(id)arg1 postponeSave:(_Bool)arg2;
- (void)addReminder:(id)arg1;
- (_Bool)invalidateMaintainedReminders;
- (_Bool)shouldInvalidateReminder:(id)arg1;
- (void)checkOrUncheckReminder:(id)arg1;
- (_Bool)willDisplayRemindersInRange:(struct _NSRange)arg1;
- (_Bool)_protectedWillDisplayRemindersInRange:(struct _NSRange)arg1;
- (_Bool)_protectedNeedsLoadAheadForRange:(struct _NSRange)arg1 inForwardDirection:(_Bool)arg2;
- (void)_protectedLoadAheadForRange:(struct _NSRange)arg1 reloadNumber:(unsigned long long)arg2 inForwardDirection:(_Bool)arg3;
- (void)updateOverdueReminders;
- (_Bool)needsReloadForChangedObjectIDs:(id)arg1;
- (void)reloadSynchronously:(_Bool)arg1;
- (void)reload;
- (struct _NSRange)_faultStartingChunk:(id)arg1;
- (id)storeProtectedData:(id)arg1 rangeAlreadyFaulted:(struct _NSRange)arg2;
- (id)fetchProtectedData;
- (void)loadRemindersInRange:(struct _NSRange)arg1 reloadNumber:(unsigned long long)arg2;
- (void)_fetchPropertiesForReminders:(id)arg1;
- (void)faultReminder:(id)arg1;
- (id)propertiesToFetch;
- (_Bool)hasBeenCanceled:(unsigned long long)arg1;
- (_Bool)_hasBeenCanceled:(unsigned long long)arg1;
- (long long)indexOfReminder:(id)arg1 protected:(_Bool)arg2;
- (_Bool)canAccessPropertiesOfReminderAtIndex:(long long)arg1;
- (id)reminderAtIndex:(long long)arg1;
@property(readonly) long long displayedNumberOfIncompleteReminders;
@property(readonly) long long numberOfIncompleteReminders;
@property(readonly, nonatomic) long long displayedNumberOfCompletedReminders;
- (id)displayedReminders;
- (long long)numberOfReminders;
- (id)predicateForCountingReminders;
- (_Bool)isListEmpty;
- (_Bool)hasPerformedFirstReload;
- (_Bool)hasRequestedFirstReload;
- (id)init;
- (id)initWithEventStore:(id)arg1;

@end


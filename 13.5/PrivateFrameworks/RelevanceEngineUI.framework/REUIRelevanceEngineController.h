//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngineUI/RERelevanceEngineObserver-Protocol.h>
#import <RelevanceEngineUI/_REUIControllerTrainingContextDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, RERelevanceEngine, RERelevanceEnginePreferences, REUITrainingContext, _REUIControllerTrainingContext;
@protocol REUIRelevanceEngineControllerDelegate;

@interface REUIRelevanceEngineController : NSObject <RERelevanceEngineObserver, _REUIControllerTrainingContextDelegate>
{
    NSMutableDictionary *_sectionNameOrdering;
    NSMutableDictionary *_currentElementStates;
    struct {
        unsigned int implementsPerformBatchUpdate:1;
        unsigned int implementsReloadElement:1;
        unsigned int implementsRemoveElement:1;
        unsigned int implementsInsertElement:1;
        unsigned int implementsMoveElement:1;
        unsigned int implementsIndexPathVisibility:1;
        unsigned int implementsBeginRelevanceUpdate:1;
        unsigned int implementsFinishedRelevanceUpdate:1;
        unsigned int implementsIdentifierBasedReloadElement:1;
    } _delegateCallbacks;
    NSArray *_hiddenIndices;
    NSMutableSet *_hiddenBundleIdentifiers;
    NSMutableArray *_pendingOperations;
    RERelevanceEnginePreferences *_preferences;
    _REUIControllerTrainingContext *_trainingContext;
    _Bool _isShowingContentElements;
    _Bool _performingBatch;
    _Bool _allowsLocationUse;
    _Bool _wantsLiveDataSources;
    _Bool _wantsIdealizedContent;
    RERelevanceEngine *_engine;
    NSArray *_sectionOrder;
    id <REUIRelevanceEngineControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool wantsIdealizedContent; // @synthesize wantsIdealizedContent=_wantsIdealizedContent;
@property(nonatomic) _Bool wantsLiveDataSources; // @synthesize wantsLiveDataSources=_wantsLiveDataSources;
@property(nonatomic) _Bool allowsLocationUse; // @synthesize allowsLocationUse=_allowsLocationUse;
@property(nonatomic) __weak id <REUIRelevanceEngineControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *sectionOrder; // @synthesize sectionOrder=_sectionOrder;
@property(readonly, nonatomic) RERelevanceEngine *engine; // @synthesize engine=_engine;
- (id)interactionTypeForElement:(id)arg1;
- (_Bool)elementIsAvailable:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
- (void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1;
- (void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1;
- (_Bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performOperations:(id)arg1 toSection:(unsigned long long)arg2;
- (void)_performBatchUpdateUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performOrEnqueueOperation:(id)arg1;
- (_Bool)_isElementHidden:(id)arg1;
- (void)_setElement:(id)arg1 atIndexPath:(id)arg2 hidden:(_Bool)arg3;
- (void)_enumerateEngineElementsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateEngineElementsInSection:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_contentForElement:(id)arg1;
- (_Bool)_sectionHasContent:(id)arg1;
- (id)_sectionSupportingNoContentElements;
- (void)_loadNewRelevanceEngine:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)predictedContentForSectionAtIndex:(unsigned long long)arg1 atDate:(id)arg2 limit:(long long)arg3;
- (void)resignCurrent;
- (void)makeCurrent;
@property(readonly, nonatomic) REUITrainingContext *trainingContext;
- (void)setDataSource:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)isDataSourceEnabled:(id)arg1;
@property(readonly, nonatomic) NSSet *disabledDataSources;
- (id)metadataForElementWithIdentifier:(id)arg1;
- (id)_indexPathForElementWithIdentifier:(id)arg1;
- (id)elementIdentifierAtIndexPath:(id)arg1;
- (id)predictionForElementAtIndexPath:(id)arg1;
- (id)identifierForElementAtIndexPath:(id)arg1;
- (id)actionAtIndexPath:(id)arg1;
- (id)_contentAtIndexPath:(id)arg1;
- (id)generateDiffableSnapshot;
- (id)indexPathForElementWithIdentifier:(id)arg1;
- (id)contentAtIndexPath:(id)arg1;
- (id)_elementAtIndexPath:(id)arg1;
- (unsigned long long)_numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)_engineIndexPathForControllerIndexPath:(id)arg1;
- (id)_controllerIndexPathForEngineIndexPath:(id)arg1;
- (id)_indexPathForSectionPath:(id)arg1;
- (id)_sectionPathForIndexPath:(id)arg1;
- (long long)_indexForSection:(id)arg1;
- (id)_sectionAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)elementAtIndexPathDidEndDisplay:(id)arg1;
- (void)elemenAtIndexPathDidDisplay:(id)arg1;
- (void)elementAtIndexPathWasSelected:(id)arg1;
@property(nonatomic) unsigned long long onScreenElementCount;
@property(nonatomic) double minimumPositiveDwellTime;
@property(nonatomic) double maximumNegativeDwellTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


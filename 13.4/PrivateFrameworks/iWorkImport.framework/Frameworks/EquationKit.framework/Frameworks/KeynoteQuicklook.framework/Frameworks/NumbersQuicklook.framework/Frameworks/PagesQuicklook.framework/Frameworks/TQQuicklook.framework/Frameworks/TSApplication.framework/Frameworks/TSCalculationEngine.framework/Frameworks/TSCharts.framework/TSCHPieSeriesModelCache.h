//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSCHChartAxis, TSCHChartInfo, TSCHChartModel, TSCHChartSeries, TSDFill, TSDShadow, TSDStroke, TSWPParagraphStyle;

@interface TSCHPieSeriesModelCache : NSObject
{
    TSCHChartModel *mChartModel;
    TSCHChartInfo *mChartInfo;
    _Bool mIsSingleCircleSpecialCase;
    TSCHChartSeries *mSingleCircleSeriesElement;
    unsigned long long mNumberOfSeries;
    double mTotalValue;
    TSCHChartSeries *mCurrentSeries;
    unsigned long long mCurrentSeriesIndex;
    double mCurrentSeriesAxisValue;
    double mCurrentSeriesPercentage;
    double mCurrentSeriesStartAngle;
    double mCurrentSeriesAngleSweep;
    _Bool mCurrentSeriesNullData;
    double mMidAngle;
    double mEndAngle;
    float mWedgeExplosion;
    float mLabelExplosion;
    float mEffectiveWedgeExplosion;
    float mEffectiveLabelExplosion;
    NSString *mLabelString;
    NSString *mValueLabelString;
    NSString *mSeriesNameLabelString;
    TSWPParagraphStyle *mParagraphStyle;
    TSDShadow *mSeriesShadow;
    TSDStroke *mSeriesStroke;
    TSDFill *mSeriesFill;
    double mSeriesOpacity;
    _Bool mGroupedShadow;
    TSCHChartAxis *mAxis;
}

- (void).cxx_destruct;
@property(readonly) TSCHChartAxis *axis; // @synthesize axis=mAxis;
@property(readonly) _Bool groupedShadow; // @synthesize groupedShadow=mGroupedShadow;
@property(readonly) double seriesOpacity; // @synthesize seriesOpacity=mSeriesOpacity;
@property(readonly) TSDFill *seriesFill; // @synthesize seriesFill=mSeriesFill;
@property(readonly) TSDStroke *seriesStroke; // @synthesize seriesStroke=mSeriesStroke;
@property(readonly) TSDShadow *seriesShadow; // @synthesize seriesShadow=mSeriesShadow;
@property(readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly) NSString *seriesNameLabelString; // @synthesize seriesNameLabelString=mSeriesNameLabelString;
@property(readonly) NSString *valueLabelString; // @synthesize valueLabelString=mValueLabelString;
@property(readonly) NSString *labelString; // @synthesize labelString=mLabelString;
@property(readonly) float effectiveLabelExplosion; // @synthesize effectiveLabelExplosion=mEffectiveLabelExplosion;
@property(readonly) float effectiveWedgeExplosion; // @synthesize effectiveWedgeExplosion=mEffectiveWedgeExplosion;
@property(readonly) float labelExplosion; // @synthesize labelExplosion=mLabelExplosion;
@property(readonly) float wedgeExplosion; // @synthesize wedgeExplosion=mWedgeExplosion;
@property(readonly) double percentage; // @synthesize percentage=mCurrentSeriesPercentage;
@property(readonly) double endAngle; // @synthesize endAngle=mEndAngle;
@property(readonly) double midAngle; // @synthesize midAngle=mMidAngle;
@property(readonly) __weak TSCHChartSeries *series; // @synthesize series=mCurrentSeries;
@property(readonly) _Bool nullData; // @synthesize nullData=mCurrentSeriesNullData;
@property(readonly) double startAngle; // @synthesize startAngle=mCurrentSeriesStartAngle;
@property(readonly) double seriesAxisValue; // @synthesize seriesAxisValue=mCurrentSeriesAxisValue;
@property(readonly) double totalValue; // @synthesize totalValue=mTotalValue;
@property(readonly) unsigned long long seriesIndex; // @synthesize seriesIndex=mCurrentSeriesIndex;
- (id)labelStringForType:(long long)arg1;
@property(readonly) _Bool shouldRenderCalloutLine;
@property(readonly) _Bool shouldRenderLabel;
- (id)labelStringWithValueLabelString:(id)arg1 seriesNameLabelString:(id)arg2;
- (id)initWithPrior:(id)arg1 orChartModel:(id)arg2 forSeries:(unsigned long long)arg3;

@end


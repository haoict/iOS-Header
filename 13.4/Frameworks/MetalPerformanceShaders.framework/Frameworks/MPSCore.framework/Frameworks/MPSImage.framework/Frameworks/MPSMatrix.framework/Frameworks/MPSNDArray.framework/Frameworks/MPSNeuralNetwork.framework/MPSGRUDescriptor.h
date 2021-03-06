//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;

@interface MPSGRUDescriptor : MPSRNNDescriptor
{
    _Bool _flipOutputGates;
    float _gatePnormValue;
    id <MPSCNNConvolutionDataSource> _inputGateInputWeights;
    id <MPSCNNConvolutionDataSource> _inputGateRecurrentWeights;
    id <MPSCNNConvolutionDataSource> _recurrentGateInputWeights;
    id <MPSCNNConvolutionDataSource> _recurrentGateRecurrentWeights;
    id <MPSCNNConvolutionDataSource> _outputGateInputWeights;
    id <MPSCNNConvolutionDataSource> _outputGateInputGateWeights;
    id <MPSCNNConvolutionDataSource> _outputGateRecurrentWeights;
}

+ (id)createGRUDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;
@property(nonatomic) _Bool flipOutputGates; // @synthesize flipOutputGates=_flipOutputGates;
@property(nonatomic) float gatePnormValue; // @synthesize gatePnormValue=_gatePnormValue;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateRecurrentWeights; // @synthesize outputGateRecurrentWeights=_outputGateRecurrentWeights;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateInputGateWeights; // @synthesize outputGateInputGateWeights=_outputGateInputGateWeights;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateInputWeights; // @synthesize outputGateInputWeights=_outputGateInputWeights;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> recurrentGateRecurrentWeights; // @synthesize recurrentGateRecurrentWeights=_recurrentGateRecurrentWeights;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> recurrentGateInputWeights; // @synthesize recurrentGateInputWeights=_recurrentGateInputWeights;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> inputGateRecurrentWeights; // @synthesize inputGateRecurrentWeights=_inputGateRecurrentWeights;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> inputGateInputWeights; // @synthesize inputGateInputWeights=_inputGateInputWeights;
- (void)dealloc;
- (id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;
- (id)init;

@end


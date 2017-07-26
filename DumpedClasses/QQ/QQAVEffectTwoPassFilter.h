//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVEffectFilter.h"

@class NSMutableDictionary, QQAVEffectFramebuffer, QQAVEffectGLProgram;

@interface QQAVEffectTwoPassFilter : QQAVEffectFilter
{
    QQAVEffectFramebuffer *secondOutputFramebuffer;
    QQAVEffectGLProgram *secondFilterProgram;
    int secondFilterPositionAttribute;
    int secondFilterTextureCoordinateAttribute;
    int secondFilterInputTextureUniform;
    int secondFilterInputTextureUniform2;
    NSMutableDictionary *secondProgramUniformStateRestorationBlocks;
}

- (void)dealloc;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)arg1 forProgram:(id)arg2 toBlock:(CDUnknownBlockType)arg3;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 isPreventRending:(_Bool)arg3;
- (id)framebufferForOutput;
- (void)initializeSecondaryAttributes;
- (id)initWithFirstStageFragmentShaderFromString:(id)arg1 secondStageFragmentShaderFromString:(id)arg2;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;

@end

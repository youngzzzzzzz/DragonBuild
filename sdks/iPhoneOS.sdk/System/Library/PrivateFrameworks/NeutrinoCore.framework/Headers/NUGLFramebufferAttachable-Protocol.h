//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NUGLContext, NUGLFramebuffer;

@protocol NUGLFramebufferAttachable
- (void)detachFromFramebuffer:(NUGLFramebuffer *)arg1 atPoint:(unsigned int)arg2 context:(NUGLContext *)arg3;
- (void)attachToFramebuffer:(NUGLFramebuffer *)arg1 atPoint:(unsigned int)arg2 context:(NUGLContext *)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding, NSSecureCoding>
{
    NSDictionary *_formatDictionary;
    struct opaqueCMFormatDescription _formatDescription;
    CDStruct_79c71658 _previewDimensions;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, getter=isExperimental) BOOL experimental;
@property(readonly, getter=isDefaultActiveFormat) BOOL defaultActiveFormat;
@property(readonly) unsigned int format;
@property(readonly) struct opaqueCMFormatDescription formatDescription;
@property(readonly) unsigned int mediaType;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;

@end

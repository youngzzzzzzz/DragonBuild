//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXDOMObjectProviding, SXDataRecordValueTransformerFactory, SXDataTableTextSourceFactory, SXTextComponentLayoutHosting;

@interface SXDataTableComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXTextComponentLayoutHosting> _textComponentLayoutHosting;
    id <SXDataTableTextSourceFactory> _textSourceFactory;
    id <SXDataRecordValueTransformerFactory> _recordValueTransformerFactory;
}

@property(readonly, nonatomic) id <SXDataRecordValueTransformerFactory> recordValueTransformerFactory; // @synthesize recordValueTransformerFactory=_recordValueTransformerFactory;
@property(readonly, nonatomic) id <SXDataTableTextSourceFactory> textSourceFactory; // @synthesize textSourceFactory=_textSourceFactory;
@property(readonly, nonatomic) id <SXTextComponentLayoutHosting> textComponentLayoutHosting; // @synthesize textComponentLayoutHosting=_textComponentLayoutHosting;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
// - (void).cxx_destruct;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithDOMObjectProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 recordValueTransformerFactory:(id)arg4;

@end

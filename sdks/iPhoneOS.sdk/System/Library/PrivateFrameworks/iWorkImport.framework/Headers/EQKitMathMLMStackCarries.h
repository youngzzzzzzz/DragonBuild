//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitLayoutSchemataStackCarries-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMStackCarries : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackCarries>
{
    NSArray *mChildren;
}

- (id)schemataChildren;
- (BOOL)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (const set_25e6ba53 )mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;

@end

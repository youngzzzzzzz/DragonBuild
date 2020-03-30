//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IKCSSDeclaration : NSObject
{
    BOOL _important;
    NSUInteger _type;
    NSString *_name;
    NSString *_aliasedName;
    _NSRange _range;
    _NSRange _nameRange;
    _NSRange _valueRange;
}

+ (id)typeString:(NSUInteger)arg1;
@property(nonatomic) _NSRange valueRange; // @synthesize valueRange=_valueRange;
@property(nonatomic) _NSRange nameRange; // @synthesize nameRange=_nameRange;
@property(nonatomic) _NSRange range; // @synthesize range=_range;
@property BOOL important; // @synthesize important=_important;
@property(retain, nonatomic) NSString *aliasedName; // @synthesize aliasedName=_aliasedName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *stringValue;

@end

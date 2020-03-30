//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCArticle, NUPageStyle;

@interface NUArticlePageStyleOperation : FCOperation
{
    FCArticle *_article;
    NSUInteger _pageNextAction;
    id /* CDUnknownBlockType */ _completion;
    NUPageStyle *_pageStyle;
}

@property(retain, nonatomic) NUPageStyle *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSUInteger pageNextAction; // @synthesize pageNextAction=_pageNextAction;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
// - (void).cxx_destruct;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)initWithArticle:(id)arg1 pageNextAction:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;

@end

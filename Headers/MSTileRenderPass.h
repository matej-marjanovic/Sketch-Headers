//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSImmutablePage;

@interface MSTileRenderPass : NSObject
{
    MSImmutablePage *_page;
    MSImmutableDocumentData *_documentData;
    double _zoomValue;
    struct CGRect _dirtyRect;
}

+ (id)tileRenderPassWithPage:(id)arg1 inDocument:(id)arg2 dirtyRect:(struct CGRect)arg3 zoomValue:(double)arg4;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(retain, nonatomic) MSImmutableDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) MSImmutablePage *page; // @synthesize page=_page;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSRect.h"

#import "MSRect.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSRect : _MSRect <MSRect>
{
    double proportions;
    long long proportionsTempDisabled;
    double _right;
    double _bottom;
}

+ (id)rectWithUnionOfRects:(id)arg1;
+ (id)rectWithRect:(struct CGRect)arg1;
+ (id)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double right; // @synthesize right=_right;
- (BOOL)isIntegral;
- (void)setRectByIgnoringProportions:(struct CGRect)arg1;
- (void)setProportions:(double)arg1;
- (double)proportions;
- (void)setConstrainProportions:(BOOL)arg1;
- (void)calculateProportions;
@property(nonatomic) struct CGPoint mid;
@property(readonly, copy) NSString *description;
- (void)log;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) BOOL primitiveConstrainProportions;
- (id)scaleBy:(double)arg1;
@property(nonatomic) double midY;
@property(nonatomic) double midX;
@property(nonatomic) double maxY;
@property(nonatomic) double minY;
@property(nonatomic) double maxX;
@property(nonatomic) double minX;
@property(nonatomic) double top;
@property(nonatomic) double left;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) struct CGSize size;
- (void)makeRectIntegral;
- (void)makeOriginIntegral;
@property(nonatomic) struct CGRect rect;
- (void)setY:(double)arg1;
- (void)setX:(double)arg1;
- (void)setHeight:(double)arg1;
- (id)delegate;
- (void)setWidth:(double)arg1;
- (BOOL)shouldConstrainProportions;
- (void)disableProportionsTemporarily:(BOOL)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)objectDidInit;
- (id)initWithRect:(struct CGRect)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;

// Remaining properties
@property(readonly, nonatomic) BOOL constrainProportions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double height;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double x;
@property(readonly, nonatomic) double y;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MSLayerCoordinateSpace;

@interface _TtC17SketchControllers6MSTool : NSObject
{
    // Error parsing type: , name: unitCoordinateSpace.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, retain) id <MSLayerCoordinateSpace> unitCoordinateSpace;
@property(nonatomic, readonly) id <MSLayerCoordinateSpace> parentCoordinateSpace;
@property(nonatomic, readonly) struct CGRect frame;
@property(nonatomic, readonly) struct CGRect bounds;
@property(nonatomic, readonly) NSArray *layers;

@end

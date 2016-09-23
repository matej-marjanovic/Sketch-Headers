//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSLayerGroup.h"

#import "MSLayerGroup.h"

@class NSArray, NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSLayerGroup : _MSLayerGroup <MSLayerGroup>
{
    BOOL _enableAutomaticScaling;
    BOOL _isOpen;
    BOOL _lightweightContainsSelectedItem;
    long long _hasLayerWithMaskMode;
    long long _preCalculatedHasSelectedLayer;
}

+ (BOOL)groupBoundsShouldBeIntegral;
+ (struct CGRect)groupBoundsForLayers:(id)arg1;
+ (void)moveLayers:(id)arg1 intoGroup:(id)arg2;
+ (id)groupFromLayers:(id)arg1;
@property(nonatomic) long long preCalculatedHasSelectedLayer; // @synthesize preCalculatedHasSelectedLayer=_preCalculatedHasSelectedLayer;
@property(nonatomic) BOOL lightweightContainsSelectedItem; // @synthesize lightweightContainsSelectedItem=_lightweightContainsSelectedItem;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) long long hasLayerWithMaskMode; // @synthesize hasLayerWithMaskMode=_hasLayerWithMaskMode;
@property(nonatomic) BOOL enableAutomaticScaling; // @synthesize enableAutomaticScaling=_enableAutomaticScaling;
- (id)candidatesForMasking;
- (void)assignWithOriginalLinkedStyleIfNecessary;
- (id)children;
- (id)layerWithID:(id)arg1;
- (BOOL)childRectShouldResizeOnlyVertically:(struct CGRect)arg1 inParentOfSize:(struct CGSize)arg2;
- (BOOL)childRectShouldResizeOnlyHorizontally:(struct CGRect)arg1 inParentOfSize:(struct CGSize)arg2;
- (unsigned long long)constraintForLayer:(id)arg1 inOldSize:(struct CGSize)arg2;
- (void)resizeChildLayer:(id)arg1 oldParentSize:(struct CGSize)arg2;
- (void)resizeChildrenFromOldSize:(struct CGSize)arg1;
- (void)rectDidChange:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)setConstrainProportions:(BOOL)arg1;
- (void)multiplyBy:(double)arg1;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (struct CGRect)requiredRect;
- (void)setIsHovering:(BOOL)arg1;
- (void)changeLayerExpandedTypeToAutomaticIfCollapsed;
- (BOOL)isOpenForSelectionWithOptions:(unsigned long long)arg1;
- (BOOL)isSelectableOnCanvasWithOptions:(unsigned long long)arg1;
- (void)deselectAllLayers;
- (void)selectLayers:(id)arg1;
- (BOOL)containsSelectedItem;
- (BOOL)shouldResizeToFitAfterDrag;
- (void)layerFinishedResize;
- (void)layerWillResize;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isExpanded;
- (void)deselectLayerAndParent;
- (BOOL)includeChildrenInCalculatingStyleSize;
- (void)refreshOverlay;
- (void)moveInLayerTreeInBlock:(CDUnknownBlockType)arg1;
- (void)setIsLocked:(BOOL)arg1;
- (BOOL)shouldStripShadowsAndInnerShadow;
- (void)setStyle:(id)arg1;
- (id)bezierPath;
- (id)defaultStyle;
- (BOOL)isSharedObject;
- (id)parentGroupRecursive;
- (void)objectDidInit;
- (void)performInitEmptyObject;
- (BOOL)handleDoubleClick;
- (id)inspectorViewControllerNames;
- (void)drawHoverWithZoom:(double)arg1 cache:(id)arg2;
- (void)prepareAsMaskContainer;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (BOOL)expandableInLayerList;
- (void)enumerateLayersAvoidingFaultingWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)translateChildrenFrameToLayers:(id)arg1;
- (void)moveTransformsToChildren:(id)arg1;
- (id)moveLayersToParent;
- (id)ungroup;
- (void)setUpNewGroup;
- (void)insertLayers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLayers:(id)arg1 afterLayer:(id)arg2;
- (void)insertLayers:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (id)CSSAttributeString;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) BOOL hasClickThrough;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *sharedObjectID;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) id <MSStyle> styleGeneric;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end


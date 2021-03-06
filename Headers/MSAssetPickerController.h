//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSAssetCollectionViewItemDelegate-Protocol.h"
#import "MSAssetCollectionViewSourceItemProvider-Protocol.h"
#import "MSAssetPickerCollectionViewDelegate-Protocol.h"
#import "NSCollectionViewDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class MSAssetCollectionLayout, MSAssetCollectionViewDataSource, MSGenericButtonController, NSArray, NSCollectionView, NSCollectionViewItem, NSIndexPath, NSString, NSView;
@protocol MSAsset, MSAssetPickerControllerDelegate;

@interface MSAssetPickerController : NSViewController <MSAssetCollectionViewSourceItemProvider, MSAssetCollectionViewItemDelegate, MSAssetPickerCollectionViewDelegate, NSCollectionViewDelegate, NSMenuDelegate>
{
    id <MSAssetPickerControllerDelegate> _delegate;
    NSArray *_dataSources;
    MSAssetCollectionViewDataSource *_currentDataSource;
    id <MSAsset> _highlightedAsset;
    NSCollectionView *_collectionView;
    MSAssetCollectionLayout *_flowLayout;
    MSGenericButtonController *_addButtonController;
    MSGenericButtonController *_assetDisplayModeButton;
    MSGenericButtonController *_switchCollectionButtonController;
    NSCollectionViewItem *_draggedItem;
    NSIndexPath *_draggingSourceIndexPath;
    NSIndexPath *_currentDropTargetPath;
    unsigned long long _effectiveDisplayMode;
}

+ (id)itemNibNameForAssetType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long effectiveDisplayMode; // @synthesize effectiveDisplayMode=_effectiveDisplayMode;
@property(retain, nonatomic) NSIndexPath *currentDropTargetPath; // @synthesize currentDropTargetPath=_currentDropTargetPath;
@property(retain, nonatomic) NSIndexPath *draggingSourceIndexPath; // @synthesize draggingSourceIndexPath=_draggingSourceIndexPath;
@property(retain, nonatomic) NSCollectionViewItem *draggedItem; // @synthesize draggedItem=_draggedItem;
@property(retain, nonatomic) MSGenericButtonController *switchCollectionButtonController; // @synthesize switchCollectionButtonController=_switchCollectionButtonController;
@property(retain, nonatomic) MSGenericButtonController *assetDisplayModeButton; // @synthesize assetDisplayModeButton=_assetDisplayModeButton;
@property(retain, nonatomic) MSGenericButtonController *addButtonController; // @synthesize addButtonController=_addButtonController;
@property(retain, nonatomic) MSAssetCollectionLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) id <MSAsset> highlightedAsset; // @synthesize highlightedAsset=_highlightedAsset;
@property(retain, nonatomic) MSAssetCollectionViewDataSource *currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) __weak id <MSAssetPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)previewColorSpaceForClient:(id)arg1;
- (void)assetItemDidEndRenaming:(id)arg1;
- (void)assetItem:(id)arg1 wantsRenameTo:(id)arg2;
- (void)scrollPathToVisible:(id)arg1;
- (void)scrollPathToVisibleAndStartEditing:(id)arg1;
- (void)assetItemWantsStartRenaming:(id)arg1;
- (void)deleteAssetItem:(id)arg1;
- (BOOL)assetItemIsEditable:(id)arg1;
- (void)assetItem:(id)arg1 copyToCollection:(id)arg2;
- (void)assetItem:(id)arg1 moveToCollection:(id)arg2;
- (void)collectionView:(id)arg1 didDoubleClickWithEvent:(id)arg2 item:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 shouldSelectItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndexPath:(id *)arg3 dropOperation:(long long *)arg4;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(id)arg4;
- (BOOL)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3;
- (id)collectionViewSource:(id)arg1 vendSupplementaryViewOfKind:(id)arg2 forIndexPath:(id)arg3;
- (id)collectionViewSource:(id)arg1 vendItemForIndexPath:(id)arg2 asset:(id)arg3 name:(id)arg4 highlighted:(BOOL)arg5;
- (void)switchAssetCollection:(id)arg1;
- (void)switchDisplayMode:(id)arg1;
- (void)addAsset:(id)arg1;
@property(readonly, nonatomic) NSView *sectionHeaderLabelView;
@property(readonly, nonatomic) NSArray *sectionHeaderAccessoryViews;
@property(readonly, nonatomic) BOOL hasContent;
- (void)setEffectiveDisplayMode:(unsigned long long)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)switchToDataSourceAtIndex:(unsigned long long)arg1;
- (void)doDeleteAssetAtIndexPath:(id)arg1 fromDataSource:(id)arg2 collectionView:(id)arg3 animated:(BOOL)arg4;
- (id)doAddAsset:(id)arg1 toDataSource:(id)arg2 forCollectionView:(id)arg3;
- (void)commitNameEditingIfNecessary;
- (void)viewWillLayout;
- (void)adjustHeight;
- (void)updateLayoutParameters;
- (void)updateHighlightedAssets;
- (void)reloadDataAndUpdateSize;
- (void)updateAssetDisplayModeButton;
- (void)updateSwitchButton;
- (void)disconnectCollectionViewFromDataSource:(id)arg1;
- (void)connectCollectionViewWithDataSource:(id)arg1;
- (void)prepareUI;
- (void)viewDidAppear;
- (void)requestUpdatedIndexesForCurrentDataSource;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


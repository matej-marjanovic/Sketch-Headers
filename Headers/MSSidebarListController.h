//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSDocumentData;

@interface MSSidebarListController : NSObject
{
    id <MSSidebarControllerDelegate> _delegate;
    id _rootObject;
}

@property(readonly, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
@property(nonatomic) __weak id <MSSidebarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dataController:(id)arg1 exportNodes:(id)arg2 toFolder:(id)arg3;
- (id)uniqueExportURLForLayer:(id)arg1 inFolder:(id)arg2 comparingTo:(id)arg3;
- (id)extensionForExportingLayer:(id)arg1;
- (BOOL)dataController:(id)arg1 copyNodes:(id)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)copyNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)dataController:(id)arg1 moveNodes:(id)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)moveNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)dataController:(id)arg1 canCopyNodes:(id)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)canCopyNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)dataController:(id)arg1 canMoveNodes:(id)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)canMoveNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (id)dragTypesForDataController:(id)arg1;
- (id)dataController:(id)arg1 readNodesFromPasteboard:(id)arg2;
- (BOOL)dataController:(id)arg1 writeNodes:(id)arg2 toPasteboard:(id)arg3;
- (id)layerForNode:(id)arg1;
@property(readonly, nonatomic) __weak MSDocumentData *documentData;
- (id)initWithDelegate:(id)arg1;

@end


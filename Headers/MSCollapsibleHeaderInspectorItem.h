//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSHeaderInspectorItem.h"

@protocol MSCollapsibleHeaderInspectorItemTarget;

@interface MSCollapsibleHeaderInspectorItem : MSHeaderInspectorItem
{
    BOOL _collapsed;
    id <MSCollapsibleHeaderInspectorItemTarget> _collapseTarget;
}

@property(nonatomic) __weak id <MSCollapsibleHeaderInspectorItemTarget> collapseTarget; // @synthesize collapseTarget=_collapseTarget;
@property(nonatomic) BOOL collapsed; // @synthesize collapsed=_collapsed;
- (void).cxx_destruct;
- (void)toggleCollapsed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;

@end


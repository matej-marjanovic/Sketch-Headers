//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSOverrideManagementItem.h"

@interface MSOverrideManagementPropertyItem : MSOverrideManagementItem
{
    BOOL _canOverride;
}

@property(nonatomic) BOOL canOverride; // @synthesize canOverride=_canOverride;
- (id)description;
- (id)title;
- (id)initWithAvailableOverride:(id)arg1 onMaster:(id)arg2;
- (id)newController;
- (double)rowHeight;

@end


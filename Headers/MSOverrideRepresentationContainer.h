//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSOverrideRepresentationBase.h>

@class MSImmutableSymbolInstance, NSArray;

@interface MSOverrideRepresentationContainer : MSOverrideRepresentationBase
{
    MSImmutableSymbolInstance *_appliedInstance;
}

+ (id)rootRepresentationForSymbolInstance:(id)arg1;
@property(retain, nonatomic) MSImmutableSymbolInstance *appliedInstance; // @synthesize appliedInstance=_appliedInstance;
- (void).cxx_destruct;
- (void)updateAfterSelectingChild;
- (BOOL)isEditable;
- (id)description;
- (id)transformForConvertingToInstance;
- (id)modifiedMasterForInstanceInMaster:(id)arg1;
- (id)children;
- (id)initWithInstance:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *selectedOverrides; // @dynamic selectedOverrides;

@end


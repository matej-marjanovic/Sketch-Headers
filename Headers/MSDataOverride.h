//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAvailableOverride, MSImmutableStyledLayer, MSSymbolInstance, NSString;

@interface MSDataOverride : NSObject
{
    MSAvailableOverride *_availableOverride;
    MSSymbolInstance *_symbolInstance;
}

@property(readonly, nonatomic) MSSymbolInstance *symbolInstance; // @synthesize symbolInstance=_symbolInstance;
@property(readonly, nonatomic) MSAvailableOverride *availableOverride; // @synthesize availableOverride=_availableOverride;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *overrideIdentifier;
@property(readonly, nonatomic) MSImmutableStyledLayer *affectedLayer;
- (id)initWithOverride:(id)arg1 symbolInstance:(id)arg2;

@end


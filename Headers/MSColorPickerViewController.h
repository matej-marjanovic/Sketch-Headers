//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "BCHSBColorPickerDelegate-Protocol.h"
#import "MSColorComponentsControllerDelegate-Protocol.h"
#import "MSFrequentColorsControllerDelegate-Protocol.h"
#import "MSKeyViewProvider-Protocol.h"

@class BCHSBColorPicker, MSColor, MSColorComponentsController, MSFrequentColorsController, MSGenericButtonController, NSString, NSView;
@protocol MSColorPickerViewControllerDelegate;

@interface MSColorPickerViewController : NSViewController <BCHSBColorPickerDelegate, MSColorComponentsControllerDelegate, MSFrequentColorsControllerDelegate, MSKeyViewProvider>
{
    BOOL _multipleValues;
    MSColor *_color;
    BCHSBColorPicker *_colorPicker;
    id <MSColorPickerViewControllerDelegate> _delegate;
    MSColorComponentsController *_componentsController;
    NSView *_componentsContainerView;
    MSFrequentColorsController *_frequentColorsController;
    MSGenericButtonController *_frequentColorsButton;
    long long _colorModel;
}

@property(nonatomic) long long colorModel; // @synthesize colorModel=_colorModel;
@property(nonatomic) BOOL multipleValues; // @synthesize multipleValues=_multipleValues;
@property(retain, nonatomic) MSGenericButtonController *frequentColorsButton; // @synthesize frequentColorsButton=_frequentColorsButton;
@property(retain, nonatomic) MSFrequentColorsController *frequentColorsController; // @synthesize frequentColorsController=_frequentColorsController;
@property(retain, nonatomic) NSView *componentsContainerView; // @synthesize componentsContainerView=_componentsContainerView;
@property(retain, nonatomic) MSColorComponentsController *componentsController; // @synthesize componentsController=_componentsController;
@property(nonatomic) __weak id <MSColorPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BCHSBColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSView *preferredFirstResponder;
@property(readonly, nonatomic) NSView *lastKeyView;
@property(readonly, nonatomic) NSView *firstKeyView;
- (id)documentColorSpaceForClient:(id)arg1;
- (id)previewColorSpaceForClient:(id)arg1;
- (void)colorComponentsControllerModelDidChange:(id)arg1;
- (void)colorComponentsControllerColorDidChange:(id)arg1;
- (void)frequentColorsControllerMenuDidClose:(id)arg1;
- (void)frequentColorsController:(id)arg1 didChooseColor:(id)arg2;
- (void)showFrequentColors:(id)arg1;
- (id)sectionHeaderAccessoryViewControllers;
- (void)setFrequentColors:(id)arg1;
- (void)updateChildControllers;
- (void)setColor:(id)arg1 multipleValues:(BOOL)arg2;
- (void)colorPickerAction:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

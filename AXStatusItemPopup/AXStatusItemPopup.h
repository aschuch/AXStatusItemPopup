//
//  StatusItemPopup.h
//  StatusItemPopup
//
//  Created by Alexander Schuch on 06/03/13.
//  Copyright (c) 2013 Alexander Schuch. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AXStatusItemPopup : NSView

// properties
@property(assign, nonatomic, getter=isActive) BOOL active;
@property(assign, nonatomic) BOOL animated;
@property(strong, nonatomic) NSImage *image;
@property(strong, nonatomic) NSImage *alternateImage;
@property(strong, nonatomic) NSStatusItem *statusItem;

/**
 Popovers may have one of several predefined appearances.
 You may specify the appearance of a popover using the constants defined in NSPopoverAppearance. The default appearance is NSPopoverAppearanceMinimal.
 
 @param appearance NSPopoverAppearance
 */
@property(nonatomic, strong, readonly) NSPopover *popover;

// init
- (id)initWithViewController:(NSViewController *)controller;
- (id)initWithViewController:(NSViewController *)controller image:(NSImage *)image;
- (id)initWithViewController:(NSViewController *)controller image:(NSImage *)image alternateImage:(NSImage *)alternateImage;


// show / hide popover
- (void)showPopover;
- (void)showPopoverAnimated:(BOOL)animated;
- (void)hidePopover;

// view size
- (void)setContentSize:(CGSize)size;

@end

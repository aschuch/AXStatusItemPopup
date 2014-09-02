//
//  AppDelegate.m
//  StatusItemPopup
//
//  Created by Alexander Schuch on 06/03/13.
//  Copyright (c) 2013 Alexander Schuch. All rights reserved.
//

#import "AppDelegate.h"
#import "ContentViewController.h"
#import "AXStatusItemPopup.h"

@interface AppDelegate () {
    AXStatusItemPopup *_statusItemPopup;
}

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // --------------
    //
    
    // init content view controller
    // will be shown inside the popover
    ContentViewController *contentViewController = [[ContentViewController alloc] initWithNibName:@"ContentViewController" bundle:nil];
    
    // init the status item popup
    NSImage *image = [NSImage imageNamed:@"cloud"];
    NSImage *alternateImage = [NSImage imageNamed:@"cloudgrey"];

    _statusItemPopup = [[AXStatusItemPopup alloc] initWithViewController:contentViewController image:image alternateImage:alternateImage];
    
    // globally set animation state (optional, defaults to YES)
    //_statusItemPopup.animated = NO;
    
    //
    // --------------
    
    // optionally set the popover to the contentview to e.g. hide it from there
    contentViewController.statusItemPopup = _statusItemPopup;
}

////////////////////////////////////
#pragma mark - Show / Hide Button Actions
////////////////////////////////////

- (IBAction)showPopover:(id)sender
{
    [_statusItemPopup showPopoverAnimated:NO];
}

- (IBAction)showPopoverAnimated:(id)sender
{
    [_statusItemPopup showPopoverAnimated:YES];
}

- (IBAction)hidePopover:(id)sender
{
    [_statusItemPopup hidePopover];
}

- (IBAction)appearanceValueChanged:(id)sender {
    if ([_statusItemPopup isActive]) {
        [_statusItemPopup hidePopover];
    }
    
    NSButton *checkBox = (NSButton*) sender;
    NSPopoverAppearance newAppearance = NSPopoverAppearanceMinimal;
    if ([(NSCell*)checkBox.cell state] == 1) {
        newAppearance = NSPopoverAppearanceHUD;
    }
    _statusItemPopup.popover.appearance = newAppearance;
}
@end

//
//  AppDelegate.h
//  StatusItemPopup
//
//  Created by Alexander Schuch on 06/03/13.
//  Copyright (c) 2013 Alexander Schuch. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

- (IBAction)showPopover:(id)sender;
- (IBAction)showPopoverAnimated:(id)sender;
- (IBAction)hidePopover:(id)sender;

@end

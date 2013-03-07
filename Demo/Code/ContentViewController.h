//
//  ContentViewController.h
//  StatusItemPopup
//
//  Created by Alexander Schuch on 06/03/13.
//  Copyright (c) 2013 Alexander Schuch. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AXStatusItemPopup.h"

@interface ContentViewController : NSViewController

@property(weak, nonatomic) AXStatusItemPopup *statusItemPopup;

- (IBAction)closeButtonPressed:(id)sender;

@end

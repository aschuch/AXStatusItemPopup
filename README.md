# AXStatusItemPopup

```NSStatusItem``` that shows a little ```NSPopover``` when clicked.

![equation](http://schuch.me/github/AXStatusItemPopup/demo.png "AXStatusItemPopup")

## Installation

Simply drag and drop the .h and .m file from the ```AXStatusItemPopup``` into your project.

## Usage

```objective-c
AXStatusItemPopup *statusItemPopup = [[AXStatusItemPopup alloc] initWithViewController:contentViewController image:image alternateImage:alternateImage];
```

```contentViewController``` an NSViewController instance. The contents of this view controllers view will be shown inside the popup. ```image``` is an NSImage that should be shown in the status bar. ```alternateImage``` an NSImage that should be shown if the popover is currently active.

### Full Example

```objective-c
// init content view controller
// its contents will be shown inside the popover
ContentViewController *contentViewController = [[ContentViewController alloc] initWithNibName:@"ContentViewController" bundle:nil];
    
// create icon images shown in statusbar
NSImage *image = [NSImage imageNamed:@"cloud"];
NSImage *alternateImage = [NSImage imageNamed:@"cloudgrey"];

AXStatusItemPopup *statusItemPopup = [[AXStatusItemPopup alloc] initWithViewController:contentViewController image:image alternateImage:alternateImage];
```

### Animations

By default showing and hiding the popover is animated. However, animations on the popover can be globally disabled.

```objective-c
statusItemPopup.animated = NO;
```

### Remotely show and hide popover

The popover can be shown and hidden manually within code by calling the following methods on the ```AXStatusItemPopup``` instance.

```objective-c
// animation defaults to the value set in statusItemPopup.animated
[statusItemPopup showPopover]; 

// overrides any value set to statusItemPopup.animated
[statusItemPopup showPopoverAnimated:YES];

// hides popover
[statusItemPopup hidePopover];
```


## Contributing

* Create something awesome, make the code better, add some functionality,
  whatever (this is the hardest part).
* [Fork it](http://help.github.com/forking/)
* Create new branch to make your changes
* Commit all your changes to your branch
* Submit a [pull request](http://help.github.com/pull-requests/)

## Contact

Feel free to get in touch.

* Website: <http://schuch.me> 
* Twitter: [@schuchalexander](http://twitter.com/schuchalexander)

## Licence

Copyright (C) 2013 Alexander Schuch

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

## Attribution
[Cloud icon](http://thenounproject.com/noun/cloud/#icon-No6852) designed by [Pieter J. Smits](http://thenounproject.com/pjsmits) from The Noun Project.
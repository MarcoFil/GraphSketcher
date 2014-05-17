// Copyright 2003-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.

#import <OmniUI/OUIInspectorSlice.h>

@class OUISegmentedControl;

@interface ScientificNotationInspectorSlice : OUIInspectorSlice
{
@private
    OUISegmentedControl *segmentedControl;
    
    NSNumberFormatter *_segmentNumberFormatter;
}

- (IBAction)changeScientificNotationSetting:(OUISegmentedControl *)sender;

@end


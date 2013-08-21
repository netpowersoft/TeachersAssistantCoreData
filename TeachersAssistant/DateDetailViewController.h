//
//  DateDetailViewController.h
//  TeachersAssistant
//
//  Created by Brian Slick on 9/20/11.
//  Copyright 2011 BriTer Ideas LLC. All rights reserved.
//

// Libraries
#import <UIKit/UIKit.h>

// Forward Declarations and Classes
#import "BTIViewController.h"
@class ActionValue;

// Public Constants

// Protocols

@interface DateDetailViewController : BTIViewController
{
}

// IBOutlet Properties
@property (nonatomic, retain) IBOutlet UIDatePicker *mainDatePicker;

// Other Public Properties
@property (nonatomic, retain) ActionValue *scratchActionValue;

// IBActions


// Other Public Methods


@end

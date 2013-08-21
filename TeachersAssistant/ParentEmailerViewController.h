//
//  ParentEmailerViewController.h
//  TeachersAssistant
//
//  Created by Brian Slick on 9/25/11.
//  Copyright 2011 BriTer Ideas LLC. All rights reserved.
//

// Libraries
#import <UIKit/UIKit.h>

// Forward Declarations and Classes
#import "BTIViewController.h"
@class Person;

// Public Constants

// Protocols

@interface ParentEmailerViewController : BTIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>
{
}

// IBOutlet Properties
@property (nonatomic, retain) IBOutlet UITableView *mainTableView;


// Other Public Properties
@property (nonatomic, retain) Person *person;
@property (nonatomic, retain) NSMutableSet *actionSelectionSet;

// IBActions


// Other Public Methods


@end

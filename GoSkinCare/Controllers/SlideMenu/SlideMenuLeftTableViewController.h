//
//  SlideMenuLeftTableViewController.h
//  BeaconApp
//
//  Created by luck32 on 7/3/15.
//  Copyright (c) 2015 luck32. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SlideMenuMainViewController;

@interface SlideMenuLeftTableViewController : UITableViewController

@property (weak, nonatomic) SlideMenuMainViewController *mainVC;

// Only afor non storyboard use
- (void)openContentNavigationController:(UINavigationController *)nvc;

- (void)showFastOrderVC;
- (void)logout;
- (void)performSelectedSegue;

@end

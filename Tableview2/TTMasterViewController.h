//
//  TTMasterViewController.h
//  Tableview2
//
//  Created by Kiran B on 17/1/13.
//  Copyright (c) 2013 Kiran B. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TTDetailViewController;

@interface TTMasterViewController : UITableViewController

@property (strong, nonatomic) TTDetailViewController *detailViewController;

@end

//
//  ViewController.h
//  CoolPlaces
//
//  Created by Mulkey, Rodrigo S. on 4/6/16.
//  Copyright © 2016 Mulkey, Rodrigo S. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) IBOutlet UITableView *placesTableView;


@end


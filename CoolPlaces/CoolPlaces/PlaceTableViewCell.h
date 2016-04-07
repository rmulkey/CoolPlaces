//
//  PlaceTableViewCell.h
//  CoolPlaces
//
//  Created by Mulkey, Rodrigo S. on 4/7/16.
//  Copyright © 2016 Mulkey, Rodrigo S. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlaceTableViewCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UIImageView *backgroundImage;
@property (nonatomic, strong) IBOutlet UILabel *placeLabel;
@property (nonatomic, strong) IBOutlet UIActivityIndicatorView *activityIndicator;


@end

//
//  DetailViewController.h
//  Address Book
//
//  Created by Chen-Yu Hsu on 11/3/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
{
    IBOutlet UILabel *detailNameLabel;
    IBOutlet UILabel *detailPhoneLabel;
    IBOutlet UILabel *detailAddressLabel;
}

@property (strong, nonatomic) id detailItem;
@property (nonatomic, retain) IBOutlet UILabel *detailNameLabel;
@property (nonatomic, retain) IBOutlet UILabel *detailPhoneLabel;
@property (nonatomic, retain) IBOutlet UILabel *detailAddressLabel;

@end

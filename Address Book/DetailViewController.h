//
//  DetailViewController.h
//  Address Book
//
//  Created by Automne on 11/3/11.
//  Copyright (c) 2011 Automne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EditorViewController.h"

@interface DetailViewController : UIViewController
{
    IBOutlet UITextField *detailNameLabel;
    IBOutlet UITextField *detailPhoneLabel;
    IBOutlet UITextField *detailAddressLabel;
    UIBarButtonItem *editButton;
}

@property (strong, nonatomic) id detailItem;
@property (nonatomic, retain) IBOutlet UITextField *detailNameLabel;
@property (nonatomic, retain) IBOutlet UITextField *detailPhoneLabel;
@property (nonatomic, retain) IBOutlet UITextField *detailAddressLabel;

-(void) editInfo;
-(void) saveInfo;
-(void) setBarButton:(int)mode;

@end

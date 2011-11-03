//
//  EditorViewController.h
//  Address Book
//
//  Created by Chen-Yu Hsu on 11/3/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditorViewController : UIViewController
{
    IBOutlet UITextField *name;
    IBOutlet UITextField *phone;
    IBOutlet UITextField *address;
}

@property (nonatomic, retain) IBOutlet UITextField *name;
@property (nonatomic, retain) IBOutlet UITextField *phone;
@property (nonatomic, retain) IBOutlet UITextField *address;

-(IBAction) textFieldReturn:(id)sender;
@end

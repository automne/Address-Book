//
//  EditorViewController.h
//  Address Book
//
//  Created by Automne on 11/3/11.
//  Copyright (c) 2011 Automne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditorViewController : UIViewController
{
    @public
        IBOutlet UITextField *name;
        IBOutlet UITextField *phone;
        IBOutlet UITextField *address;
}

@property (nonatomic, retain) IBOutlet UITextField *name;
@property (nonatomic, retain) IBOutlet UITextField *phone;
@property (nonatomic, retain) IBOutlet UITextField *address;

-(IBAction) textFieldReturn:(id)sender;
@end

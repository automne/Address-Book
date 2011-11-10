//
//  DetailViewController.m
//  Address Book
//
//  Created by Automne on 11/3/11.
//  Copyright (c) 2011 Automne. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()
- (void)configureView;
@end

@implementation DetailViewController

@synthesize detailItem = _detailItem;
@synthesize detailNameLabel;
@synthesize detailPhoneLabel;
@synthesize detailAddressLabel;

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}


/**
 *   Update Basic view for init stat.
 */
- (void)configureView
{
    if (self.detailItem) {
        
        self.detailNameLabel.text = [self.detailItem valueForKey:@"name"];
        self.detailPhoneLabel.text = [self.detailItem valueForKey:@"phoneNumber"];
        self.detailAddressLabel.text = [self.detailItem valueForKey:@"address"];
        
        [self.detailNameLabel setEnabled:NO];
        [self.detailPhoneLabel setEnabled:NO];
        [self.detailAddressLabel setEnabled:NO];
        
        self.title = [self.detailItem valueForKey:@"name"];        
        
        [self setBarButton:0];
        
    }
}


/**
 *   Set view for editing.
 */
-(void) editInfo
{
    [self.detailNameLabel setBorderStyle:UITextBorderStyleRoundedRect];
    [self.detailPhoneLabel setBorderStyle:UITextBorderStyleRoundedRect];
    [self.detailAddressLabel setBorderStyle:UITextBorderStyleRoundedRect];
    
    [self.detailNameLabel setEnabled:YES];
    [self.detailPhoneLabel setEnabled:YES];
    [self.detailAddressLabel setEnabled:YES];
    
    [self setBarButton:1];
    
}


/**
 *
 *  Save Information that user inputs. 
 *  Then, update the view.
 */
-(void) saveInfo
{
    [self.detailNameLabel setBorderStyle:UITextBorderStyleNone];
    [self.detailPhoneLabel setBorderStyle:UITextBorderStyleNone];
    [self.detailAddressLabel setBorderStyle:UITextBorderStyleNone];
    
    [self.detailNameLabel setEnabled:NO];
    [self.detailPhoneLabel setEnabled:NO];
    [self.detailAddressLabel setEnabled:NO];
    
    [self.detailItem setValue:self.detailNameLabel.text forKey:@"name"];
    [self.detailItem setValue:self.detailPhoneLabel.text forKey:@"phoneNumber"];
    [self.detailItem setValue:self.detailAddressLabel.text forKey:@"address"];
    
    [self configureView];
}


/**
 * @param
 *    mode = 0 -> set editButton to Edit Button
 *    mode = 1 -> set editButton to Done Button
 */
-(void) setBarButton:(int)mode
{
    if(mode==0){
        editButton = [[UIBarButtonItem alloc] initWithTitle:@"Edit" style:UIBarButtonItemStylePlain  target:self action:@selector(editInfo)];
        self.navigationItem.rightBarButtonItem = editButton;
    }else{
        editButton = [[UIBarButtonItem alloc] initWithTitle:@"Done" style:UIBarButtonItemStyleDone  target:self action:@selector(saveInfo)];
        self.navigationItem.rightBarButtonItem = editButton;
    }
}


/**
 *  Hide Keyboard when "Return" is pressed.
 */
- (IBAction) textFieldReturn:(id)sender
{
	[sender resignFirstResponder];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self configureView];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
	[super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
	[super viewDidDisappear:animated];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

@end

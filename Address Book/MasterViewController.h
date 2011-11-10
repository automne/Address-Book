//
//  MasterViewController.h
//  Address Book
//
//  Created by Automne on 11/3/11.
//  Copyright (c) 2011 Automne. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>
#import "EditorViewController.h"

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>
{
    EditorViewController *editorView;
    IBOutlet UISearchBar *searchBar;
    NSFetchedResultsController *fetchedResultsController;
}
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) UISearchDisplayController *searchDisplayController;
@property (nonatomic, retain) IBOutlet UISearchBar *searchBar;


-(void)saveInfo;
@end

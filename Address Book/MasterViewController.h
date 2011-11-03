//
//  MasterViewController.h
//  Address Book
//
//  Created by Chen-Yu Hsu on 11/3/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>
#import "EditorViewController.h"

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>
{
    EditorViewController *editorView;
}
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
-(void)saveInfo;
@end

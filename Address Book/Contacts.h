//
//  Contacts.h
//  Address Book
//
//  Created by Automne on 11/3/11.
//  Copyright (c) 2011 Automne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Contacts : NSManagedObject

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * phoneNumber;

@end

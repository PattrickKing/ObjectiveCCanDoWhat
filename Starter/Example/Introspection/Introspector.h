//
// Created by Joshua Gretz on 8/12/13.
// Copyright (c) 2013 Gretz. All rights reserved.



#import <Foundation/Foundation.h>


@interface Introspector : NSObject

-(NSArray*) inspectPropertiesForClass: (Class) classType;

@end
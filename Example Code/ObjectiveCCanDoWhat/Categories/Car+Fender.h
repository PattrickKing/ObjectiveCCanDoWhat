//
//  Car+Fender.h
//  ObjectiveCCanDoWhat
//
//  Created by Joshua Gretz on 5/31/13.
//  Copyright (c) 2013 TrueFit. All rights reserved.
//

#import "Car.h"
#import "Fender.h"

@interface Car (Fender)

@property (strong) Fender* fender;

@end

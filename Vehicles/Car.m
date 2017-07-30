//
//  Car.m
//  Vehicles
//
//  Created by Mohammad Shahzaib Ather on 2017-07-30.
//  Copyright © 2017 Designated Nerd Software. All rights reserved.
//

#import "Car.h"

@implementation Car


-(id) init {
    
    if (self = [super init]) {
        //Since all cars have four wheels we safely initialize this for every initialized instance of car
        self.numberOfWheels = 4;
        
    }
    return self;
    
    
}



@end

//
//  Car.h
//  Vehicles
//
//  Created by Mohammad Shahzaib Ather on 2017-07-30.
//  Copyright © 2017 Designated Nerd Software. All rights reserved.
//

#import "Vehicle.h"

@interface Car : Vehicle

@property (nonatomic , assign) BOOL isConvertible;
@property (nonatomic , assign) BOOL isHatchBack;
@property (nonatomic , assign) BOOL hasSunroof;
@property (nonatomic , assign) NSInteger numberOfDoors;


@end

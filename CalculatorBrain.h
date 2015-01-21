//
//  CalculatorBrain.h
//  Calculator
//
//  Created by 
//Allison Crouch and Carter Mann on 1/20/15.
//  Copyright (c) 2015 CSCI448
//Allison Crouch and Carter Mann. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end

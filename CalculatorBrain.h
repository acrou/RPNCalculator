//
//  CalculatorBrain.h
//  Calculator
//
//  Created by 
//Allison Crouch on 1/20/15.
//  Copyright (c) 2015 CSCI448
//Allison Crouch. All rights reserved.
//

#import <Foundation/Foundation.h>Calculator

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end

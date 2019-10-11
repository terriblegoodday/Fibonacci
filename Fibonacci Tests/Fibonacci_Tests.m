//
//  Fibonacci_Tests.m
//  Fibonacci Tests
//
//  Created by Eduard Dzhumagaliev on 10/12/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "fiblib.hpp"

@interface Fibonacci_Tests : XCTestCase

@end

@implementation Fibonacci_Tests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testExample {
    XCTAssert(fib)
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end

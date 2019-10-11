//
//  fiblib.cpp
//  Fibonacci
//
//  Created by Eduard Dzhumagaliev on 10/12/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include <cmath>

int fib(int n) {
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

//
//  main.cpp
//  Fibonacci
//
//  Created by Eduard Dzhumagaliev on 10/12/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "fiblib.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    if (n >= 0) {
        cout << fib(n) << endl;
    }
    printf("%x", 0b101);
    
    return 0;
}

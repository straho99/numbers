//
//  main.cpp
//  numbers
//
//  Created by Strahil Ruychev on 27.11.23.
//

#include <iostream>

using namespace std;

int main() {
    int s, x, y;
    int maxSum = 0;
    
    cin >> s;
    
    int xTwoDigits, yTwoDigits;
    int a = 0, b = 0;
    
    for (y = 100; y<=999; y++) {
        int secondDigit = (y/10)%10;
        
        if (secondDigit != 0) {
            continue;
        }
        
        for(x = 100; x <= 999; x+=10) {
            xTwoDigits = x / 10;
            yTwoDigits = (y/100)*10 + y%100;
            
            if (xTwoDigits != yTwoDigits) {
                continue;
            }
            
            if (xTwoDigits + yTwoDigits < s && (maxSum < xTwoDigits + yTwoDigits)) {
                maxSum = xTwoDigits + yTwoDigits;
                a = x;
                b = y;
            }
        }
    }
    
    cout << maxSum << " " << a << " " << b;
    
    return 0;
}

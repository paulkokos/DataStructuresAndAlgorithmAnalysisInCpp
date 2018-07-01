//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
int main(){
    f(10);
    return 0;
}

int f (int x) {
    if (x == 0) {
        return 0;
    } else {

        return 2 * f(x-1) + x*x;
    }
}
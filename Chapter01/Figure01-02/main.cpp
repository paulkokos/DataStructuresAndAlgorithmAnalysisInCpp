//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
using namespace std;
int f(int x);
int main(){
    cout <<f(1) <<'\n';
    cout <<f(2)<<'\n';
    cout <<f(3)<<'\n';
    cout <<f(4)<<'\n';
    return 0;
}

int f (int x) {
    if (x == 0) {
        return 0;
    } else {

        return 2 * f(x-1) + x*x;
    }
}
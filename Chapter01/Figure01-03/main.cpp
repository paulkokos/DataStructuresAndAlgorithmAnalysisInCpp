//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
int bad (int n);
int main(){
    bad(10);
    return 0;
}

int bad (int n) {
    if (n == 0) {
        return 0;
    } else {
        return (bad(n/3+1) + n -1);
    }

}
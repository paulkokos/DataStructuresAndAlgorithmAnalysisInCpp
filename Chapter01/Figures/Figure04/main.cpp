//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
using namespace std;
void printOut(int n);
void printDigit(int n);
int main(){
    printOut(15);
    return 0;
}

void printOut(int n) {
    if (n>=10)
        printOut(n/10);
    printDigit(n%10);
}
void printDigit(int n) {
    cout << n << endl;
}
//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap1 (double & x, double & y);

void swap2 (vector<string>& x, vector<string> &y);


int main(){
    double a=10.33,b=20.33;
    string string1 = "daidalos";
    string string2 = "daidaloukos";
    swap1(a,b);
    //swap2("daidalos","daidaloykos");

    cout << string1 << " " << string2 << endl;
    cout << a << " " << b << endl;
    return 0;
}

void swap1 (double & x, double & y) {
    double tmp = x;
    x=y;
    y = tmp;
}

void swap2 (vector<string>& x, vector<string> &y){
    vector<string> tmp =x;
    x=y;
    y=tmp;
}
//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include <vector>

using namespace std;

void swap (double & x, double & y);

void swap (vector<string>& x, vector<string> &y);


int main(){


    return 0;
}

void swap (double & x, double & y) {
    double tmp = x;
    x=y;
    y = tmp;
}

void swap (vector<string>& x, vector<string> &y){
    vector<string> tmp =x;
    x=y;
    y=tmp;
}
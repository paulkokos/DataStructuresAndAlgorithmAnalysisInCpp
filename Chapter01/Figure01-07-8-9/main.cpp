//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include "IntCell.h"

using namespace std;
int main(){
    IntCell m;
    m.write(5);
    cout << "Cell contents: " << m.read() << endl;

    return 0;
}
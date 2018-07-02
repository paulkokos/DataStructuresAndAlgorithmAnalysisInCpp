//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include <vector>
#include "IntCell.h"

using namespace std;
int main(){
    IntCell *m;
    m= new IntCell{0};

    m->write(5);

    cout << "Cell contents:" << m->read() << endl;

    delete m;
    return 0;
}
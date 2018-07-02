//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include "IntCell.h"
using namespace std;
int main(){
    IntCell *cell1= new IntCell(100);
    IntCell *cell2 = new IntCell(200);

    cout <<cell1->read() << "\n";
    cell1->write(1000);
    cout << cell1->read()<< "\n";

    cout <<cell2->read() << "\n";
    cell2->write(2000);
    cout << cell2->read()<< "\n";
    return 0;
}
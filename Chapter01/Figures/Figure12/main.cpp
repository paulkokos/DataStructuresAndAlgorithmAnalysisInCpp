//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include <vector>
#include "IntCell.h"

using namespace std;
struct LargeType {
    long int a;
};
string randomItem(const vector<string> &arr);
LargeType randomItem1(const vector<LargeType> &arr);
const LargeType & randomItem2(const vector<LargeType> &arr);
int main(){
    IntCell *m;
    m= new IntCell{0};

    m->write(5);

    cout << "Cell contents:" << m->read() << endl;

    delete m;
    return 0;
}

LargeType randomItem1(const vector<LargeType> &arr){
    return arr[randomInt(0,arr.size()-1)];
}

const LargeType & randomItem2(const vector<LargeType> &arr) {

}
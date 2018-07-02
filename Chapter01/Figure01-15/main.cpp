//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include <vector>

using namespace std;

void swap1 (vector<string>& x, vector<string> &y);

void swap2 (vector<string>& x, vector<string> &y);


int main(){
    vector<string> string1;
    vector<string> string2;
    vector<string> string3,string4;
    string1.emplace_back("string1");
    string2.emplace_back("string2");
    string3.emplace_back("string3");
    string4.emplace_back("string4");

    swap1(string1,string2);
    swap2(string3,string4);

    cout << string1[0] << " " << string2[0] << endl;
    cout << string3[0] << " " << string4[0] << endl;
    return 0;
}

void swap1 (vector<string>& x, vector<string> &y) {
    vector<string> tmp = static_cast<vector<string>&&>(x);
    x = static_cast<vector<string>&&>(y);
    y = static_cast<vector<string>&&>(tmp);
}

void swap2 (vector<string>& x, vector<string> &y){
    vector<string> tmp = std::move(x);
    x= std::move(y);
    y = std::move(tmp);
}
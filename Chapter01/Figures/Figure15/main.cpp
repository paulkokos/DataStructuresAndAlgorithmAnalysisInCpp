//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
void swap_2(vector<string> &x, vector<string>&y) {
    vector<string> tmp = static_cast<vector<string>&&>(x);
    x= static_cast<vector<string>&&>(y);
    y= static_cast<vector<string>&&>(tmp);
}
void swap_1(vector<string> &x, vector<string>&y) {
    vector<string> tmp = std::move(x);
    x=std::move(y);
    y=std::move(tmp);
}

int main(){
    string string1= "daidalos";
    string string2 = "daidaloykos";
    string result1,result2;
    //swap(string1,string2);
    cout << string1 << " " << string2 << endl;
//    swap_2(&string1,&string2);
    std::swap(string1,string2);
    cout << string1 << " " << string2 << endl;
//    swap_1(&string1,&string2);
    std::swap(string1,string2);
    cout << string1 << " " << string2 << endl;
    return 0;
}


//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include <vector>

using namespace std;

class Intcell {
public:
    explicit Intcell(int initialValue =0){
        storedValue = new int {initialValue};
    }
    int read() const {
        return *storedValue;
    }

    void write(int x) {
        *storedValue = x;
    }

private:
    int *storedValue;
};


int main(){

    return 0;
}
//
// Created by paulkokos on 2/7/2018.
//

#ifndef DATASTRUCTURESANDALGORITHMANALYSISINCPP_INTCELL_H
#define DATASTRUCTURESANDALGORITHMANALYSISINCPP_INTCELL_H


class IntCell {
public:
    IntCell();
    IntCell( int initialValue);
    int read();
    void write(int x);

private:
    int storedValue;
};


#endif //DATASTRUCTURESANDALGORITHMANALYSISINCPP_INTCELL_H

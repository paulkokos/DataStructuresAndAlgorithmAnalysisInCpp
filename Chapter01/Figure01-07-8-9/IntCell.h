//
// Created by paulkokos on 2/7/2018.
//

#ifndef DATASTRUCTURESANDALGORITHMANALYSISINCPP_INTCELL_H
#define DATASTRUCTURESANDALGORITHMANALYSISINCPP_INTCELL_H


class IntCell {
public:
    explicit IntCell( int initialValue =0);
    int read() const ;
    void write(int x);

private:
    int storedValue;
};


#endif //DATASTRUCTURESANDALGORITHMANALYSISINCPP_INTCELL_H

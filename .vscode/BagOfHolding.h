#ifndef BAGOFHOLDING_H
#define BAGOFHOLDING_H
#include<string>
#include<cstdlib>
#include<vector>

class BagOfHolding{

    private: 
    std::vector<int> bag;
    public: 
    void addItem();
    void removeItem();

};

#endif
#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates > loadSize){
        int pileOne;
        int pileTwo;
        if (numCrates%2 != 0){
            pileOne = ((numCrates+1)/2);
            pileTwo = ((numCrates-1)/2);
        }
        else {
            pileOne = numCrates/2;
            pileTwo = numCrates/2;
        }
    return numTrucks(pileOne, loadSize) + numTrucks(pileTwo, loadSize);
    }
    else {
    return 1;
    }
}


#include "Truckloads.h"
#include <iostream>

int main() {
    Truckloads truckloads;
    int trucksNeeded = truckloads.numTrucks(10, 2);
    std::cout << "Number of trucks needed: " << trucksNeeded << std::endl;
    return 0;
}
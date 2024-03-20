#include<cmath>
#include<iostream>

int sum_of_powers(int n){
    if (n==0){
        return sum_of_powers(n);
    }
    else{
    int acc = pow(n, n);
    n = n-1;
    return sum_of_powers(n)+acc;
    }
}


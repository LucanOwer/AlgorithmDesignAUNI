#include<cmath>
#include<iostream>

int sum_of_powers(int n){
    int acc = 0;
    if (n==0){
        return acc;
    }
    else{
    acc = acc+pow(n, n);
    std::cout<<"Current acc: "<<acc<<std::endl;
    n = n-1;
    return (sum_of_powers(n)+acc);
    }
}

int main(){
    sum_of_powers(4);
    return 0;
}



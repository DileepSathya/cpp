#include<iostream>
int main(){
    const int size=10;
    int size=2;
    std::cout<<size<<std::endl;
    return 0;
}

/*throws an compile time error because we declare size as cosntant*/
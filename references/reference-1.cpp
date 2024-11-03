#include<iostream>
int main(){
    int ival=10;
    int &refval=ival;
    std::cout<<ival<<' '<<refval<<std::endl;
    return 0;
}
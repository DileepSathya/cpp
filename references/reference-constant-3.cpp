#include<iostream>
int main(){
    const int ival=10;
    const int &refval=ival;
    int &refval2=ival;         //thrws out an error as it cosntant
    std::cout<<ival<<' '<<refval<<std::endl;
    return 0;
}
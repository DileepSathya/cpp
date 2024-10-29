#include<iostream>
int main(){
    std::cout<<"Enter v1 and v2"<<std::endl;
    int v1,v2;
    std::cin>>v1>>v2;
    if(v1 < v2)
        std::cout<<v1<<"is less than"<<v2<<std::endl;
    else if(v1 > v2)
        std::cout<<v1<<"is greater than"<<v2<<std::endl;
    else
        std::cout<<"same entry"<<std::endl;
    return 0;
}
#include<iostream>
int main(){
      //null pointer
    int *p=nullptr;
    int x=123;
    p=&x;
    std::cout<<*p<<'\n'; //gives the actual value
    std::cout<<p<<'\n';     //gives the address

}
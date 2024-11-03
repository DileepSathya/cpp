#include<iostream>
std::string s2="hi";            //global
int main(){
    std::string s1="hello world";   //local
    std::cout<<s1<<s2<<std::endl;
    return 0;

}
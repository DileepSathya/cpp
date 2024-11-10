#include<iostream>
using std::cout;
using std::endl;
int main(){
    int a=10;
    int *p=&a;
    int *p2=p;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<p2<<endl;
    return 0;
}
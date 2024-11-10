#include<iostream>
using std::cout;
using std::endl;
int main(){
    int arr[]={1,2,34,5};
    int *p=arr;
    int *p2=&arr[2];
    cout<<*p<<endl;
     cout<<*p2<<endl;
     return 0;
}
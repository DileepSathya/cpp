#include<iostream>
using namespace std;

void name_n(int n){
    if(n==0) return;
    cout<<n<<")sathya "<<endl;
    name_n(n-1);
}

int main(){
    int n= 5;
    name_n(n);
    return 0;
}
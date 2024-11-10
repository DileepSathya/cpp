#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y='a';
    //y implicity conc=verted to int,ascii
    //value pf a is 97
    x=x+y;
    cout<<"x="<<x<<endl;
    return 0;
}
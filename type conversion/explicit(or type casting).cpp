#include<iostream>
#include<typeinfo>

using namespace std;
int main(){

    double x=1.2;
    x=(int)x+1;
    cout<<"x="<<x<<endl;
    cout<<"x="<<typeid(x).name()<<endl;

    return 0;
}
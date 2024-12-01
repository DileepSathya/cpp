#include<iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main(){
    using namespace first;
    using namespace std;
    cout<<x<<endl;
    return 0;
}
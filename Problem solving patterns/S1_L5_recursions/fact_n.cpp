#include<iostream>
using namespace std;

class solution {
    public:
        void fact(int n,int res){
            if(n<1){
                cout<<res<<endl;
                return;
            }
            fact(n-1,res*n);

        }
};

int main(){
    int n=5;
    solution s;
    s.fact(n,1);
    return 0;

}
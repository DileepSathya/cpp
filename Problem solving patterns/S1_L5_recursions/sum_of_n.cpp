#include<iostream>
using namespace std;

class Solution {
    public:
        void sum_n(int n,int res){
            if (n<1) {
                cout<<res<<endl;
                return;
            }


            sum_n(n-1,res+n);
        }

};

int main(){
    int n=5;
    Solution s;
    s.sum_n(n,0);

}
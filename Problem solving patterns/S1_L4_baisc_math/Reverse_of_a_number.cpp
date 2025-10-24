//https://takeuforward.org/maths/reverse-digits-of-a-number

#include<iostream>
using namespace std;

class Solution{
    public:
    int rev_num(int &n){
        
        int res=0;
        int q=0;
        while(n>0){
            int remainder =0;
            remainder=n - ((n/10)*10);
            res=(res*10)+remainder;
            n=n/10;

        }
        return res;
    }

};

int main(){
    int n=10400;
    Solution s;
    cout<<s.rev_num(n)<<endl;
    return 0;
}
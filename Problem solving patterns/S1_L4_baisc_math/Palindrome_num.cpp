//https://takeuforward.org/data-structure/check-if-a-number-is-palindrome-or-not/

#include<iostream>
using namespace std;

class Solution{
    public:
        bool palindrome(int &n){
            int new_num=0;
            int act_num=n;
            while(n>0){
                int remander=0;
                remander=(n-(n/10)*10);
                
                new_num=(new_num*10)+remander;
                
                n=n/10;
            }
            
            return new_num==act_num;
        }

};

int main(){
    int num=1334;
    Solution s;
    cout<<s.palindrome(num)<<endl;
    return 0;
}
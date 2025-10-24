//https://takeuforward.org/plus/dsa/problems/count-all-digits-of-a-number

#include<iostream>
using namespace std;
class Solution {
public:
    int countDigit(int &n) {
        
        int count =0;
        while(n>0){
            count++;
            n=n/10;
            cout<<n<<endl;
        }
        return count;
    }
};


int main(){
    int n=12345;
    Solution s;
    
    cout<<s.countDigit(n)<<endl;
}
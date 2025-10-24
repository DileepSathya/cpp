//https://takeuforward.org/data-structure/count-frequency-of-each-element-in-the-array/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

    unordered_map<int,int> freq_count(vector<int> arr){
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        return mp;
    }

int main(){
    vector<int> arr = {10,5,10,15,10,5};
    int q=3;
    unordered_map<int,int> mp=freq_count(arr);
    while(q--){
        int num;
        cout<<"Enter number: ";
        cin>>num;
        cout<<mp[num]<<endl;
        
    }
return 0;
}
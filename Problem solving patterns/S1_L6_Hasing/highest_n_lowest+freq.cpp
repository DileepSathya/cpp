//https://takeuforward.org/arrays/find-the-highest-lowest-frequency-element/
#include<iostream>
#include<vector>
#include<map>
using namespace std;

map<int,int> HNL_freq(vector<int> arr){
    map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        return mp;

}

int main(){
    vector<int> arr = {10,5,10,15,10,5};
    map<int,int> mp=HNL_freq(arr);
    int max_freq=0,min_freq=arr.size();
    int max_ele=0,min_ele=0;
    for(auto x:mp){
        int count=x.second;
        int element=x.first;

        if (count>max_freq){
            max_ele=element;
            max_freq=count;
        }
        if(count < min_freq){
            min_ele=element;
            min_freq=count;
        }
        
    }
    cout << "The highest frequency element is: " << max_ele << "\n";
    cout << "The lowest frequency element is: " << min_ele << "\n";
    return 0;
}
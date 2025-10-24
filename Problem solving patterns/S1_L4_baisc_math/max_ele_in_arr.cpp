#include<iostream>
#include<vector>
using namespace std;

int max_ele_in_arr(vector<int> x){
    int max_element=x[0];
    for(auto i:x){
        if(i>max_element){
            max_element=i;
        }
    }
    return max_element;
}

int main(){
    vector<int> arr ={2,5,1,6,9,3};
    int max_ele=max_ele_in_arr(arr);
    cout<<"max elelement in array is :"<<max_ele<<endl;
    return 0;
}
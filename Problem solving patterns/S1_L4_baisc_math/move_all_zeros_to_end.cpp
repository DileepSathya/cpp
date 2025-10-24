#include<iostream>
#include<vector>
using namespace std;

void move_zeros_end(vector<int> d){
    for(int i=0;i<d.size();i++){
        if(d[i]==0){
            for(int j=i;j<d.size();j++){
                d[j]=d[j+1];
            }
            d[d.size()]=0;
        }
    }
    for(int z=0;z<d.size();z++){
        cout<<d[z]<<endl;
    }
}

int main(){
    vector<int> data={1,0,3,2,5,8,0,9,6};
    move_zeros_end(data);
    return 0;

}
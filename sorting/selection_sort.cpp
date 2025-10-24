#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i){
            int temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
        }
    }
    
 for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;   

}
}
int main(){
    int arr[]={2,5,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    return 0;
}
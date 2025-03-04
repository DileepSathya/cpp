#include<iostream>
#include<vector>
using std::vector;
using std::vector;
using std::cout;
using std::endl;
void bubble_sort(vector <int> arr){
    int temp;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    std::cout<< "bubble_sort"<<std::endl;
    for(int items:arr){
        std::cout <<items<<std::endl;
    }
}

// Bubble sort using pointers and pass-by-reference
void bubble_sort_gpt(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  // Optimization: If no swaps occur, array is sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr.data() + j) > *(arr.data() + j + 1)) {  // Pointer arithmetic
                std::swap(*(arr.data() + j), *(arr.data() + j + 1));
                swapped = true;
            }
        }
        if (!swapped) break;  // No swaps mean the array is already sorted
    }

    // Print the sorted array
    cout << "Sorted Array: ";
    for (int item : arr) {
        cout << item << " ";
    }
    cout << endl;
}
int main(){
    vector <int> x={7,12,9,11};
    bubble_sort(x);
    bubble_sort_gpt(x);
    return 0;


}
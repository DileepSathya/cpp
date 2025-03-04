#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

void selection_sort(vector<int> &arr){
    int lowest=arr[0];
    for(int i=0;i<arr.size();i++){

        if(lowest<arr[i]){
            std::swap(lowest,arr[i]);
        }
    }
    cout<<"selection_sort:";
    for(int item:arr){
        cout<<item<<" ";
    }
    cout<<endl;
}

void selection_sort_gpt(vector<int> &arr) {
    size_t n = arr.size();

    for (size_t i = 0; i < n - 1; i++) {
        int *min_ptr = &arr[i];  // Pointer to the current minimum element

        // Find the smallest element in the remaining unsorted part
        for (size_t j = i + 1; j < n; j++) {
            if (arr[j] < *min_ptr) {
                min_ptr = &arr[j];  // Update min_ptr to the new minimum
            }
        }

        // Swap only if a smaller element is found
        if (min_ptr != &arr[i]) {
            std::swap(*min_ptr, arr[i]);
        }
    }

    // Print sorted array
    cout << "Selection Sort: ";
    for (int item : arr) {
        cout << item << " ";
    }
    cout << endl;
}

int main(){
    vector <int> x={12,11,7,9};
    selection_sort(x);
    selection_sort_gpt(x);
    return 0;


}
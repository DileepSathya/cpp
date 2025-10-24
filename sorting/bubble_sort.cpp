#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {              // Run n-1 passes
        for(int j = 0; j < n - i - 1; j++) {       // Avoid out-of-bounds
            if(arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] = {2, 5, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    return 0;
}

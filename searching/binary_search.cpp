#include<iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // prevents overflow
        cout << "mid: " << mid << " | arr[mid]: " << arr[mid] << endl;
        cout << "low: " << low << " | high: " << high << endl;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 40, 50};
    int key = 40;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binary_search(arr, 0, n - 1, key);
    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}

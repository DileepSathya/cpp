#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute frequency
    int hash[13] = {0};  // works only if arr[i] ∈ [0, 12]
    for (int i = 0; i < n; i++) {
//        cout<<hash[arr[i]]<<endl;
        hash[arr[i]] += 1;
//        cout<<hash[arr[i]]<<endl;
    }

    // queries
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }

    return 0;
}

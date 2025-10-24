#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rev(vector<int>& n, vector<int>& new_arr) {
        if (n.empty()) return; // base case

        int last = n.back();   // take last element
        n.pop_back();          // remove it from original
        new_arr.push_back(last); // push into new array

        rev(n, new_arr);       // recursive call
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> new_arr;

    Solution s;
    s.rev(arr, new_arr);

    cout << "Reversed array: ";
    for (int x : new_arr) cout << x << " ";
    cout << endl;

    return 0;
}

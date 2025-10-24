#include <iostream>
#include <vector>
using namespace std;

vector<int> move_zeros_end(vector<int> d) {
    int pos = 0;  
    for (int i = 0; i < d.size(); i++) {
        if (d[i] != 0) {
            swap(d[i], d[pos]);
            pos++;
        }
    }

    return d;
}

int main() {
    vector<int> data = {1, 0, 3, 2, 5, 8, 0, 9, 6};
    vector<int> result = move_zeros_end(data);

    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}

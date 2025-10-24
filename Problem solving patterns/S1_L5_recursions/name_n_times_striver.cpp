#include <iostream>
using namespace std;

class Solution {
public:
    // Recursive function to print name count times
    void printName(string name, int count, int N) {
        // Base case: if count equals N, stop recursion
        if (count == N)
            return;

        // Print the name
        cout <<count+1<<")"<< name << "\n";

        // Recursive call with incremented count
        printName(name, count + 1, N);
    }
};

int main() {
    Solution sol;
    int N = 5;
    string name = "sathya";

    sol.printName(name, 0, N);

    return 0;
}
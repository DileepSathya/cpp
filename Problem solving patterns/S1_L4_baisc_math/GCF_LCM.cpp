#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
/*
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
*/


int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;   // safer to divide first to avoid overflow
}
int main() {
    int n1 = 12, n2 = 9;
    cout <<gcd(n1, n2) << endl;
    cout<<lcm(n1,n2)<<endl;
    return 0;
}

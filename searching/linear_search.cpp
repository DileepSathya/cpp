#include<iostream>
#include<vector>
using namespace std;

void linear_search(vector<int> &x, int tg) {
    for(int i = 0; i < x.size(); i++) {
        if(tg == x[i]) {
            cout << tg << " found at index: " << i << endl;
            return;
        }
    }
    // Only print if not found after entire loop
    cout << tg << " not found" << endl;
}

int main() {
    vector<int> x;
    int i=0;
    int s;
    while(i<5){
        cout<<"enter "<<i<<":";
        cin>>s;
        x.push_back(s);
        i++;
    }
    int target;
    cout<<"Enter target number:"<<endl;
    cin>>target;



    linear_search(x, target);

    return 0;
}

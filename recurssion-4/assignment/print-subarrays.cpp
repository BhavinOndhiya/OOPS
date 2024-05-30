#include <bits/stdc++.h>
using namespace std;

void subarray(vector<int>& arr, int s, int e) {
    // base case
    if (e == arr.size()) {
        return;
    }
    // solve 1 case
    for (int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // recursion
    subarray(arr, s, e + 1);
}

void printsubarray(vector<int>& arr) {
    for (int s = 0; s < arr.size(); s++) {
        subarray(arr, s, s);
    }
}

int main() {
    int n; 
    cin >> n;
    vector<int> arr(n); // Resize the vector to have 'n' elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printsubarray(arr);
    return 0;
}

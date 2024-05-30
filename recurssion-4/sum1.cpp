#include<bits/stdc++.h>
using namespace std;
//approach 1
// int solve(int arr[], int target){
//     //base case
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }

//     int mini = INT_MAX;
//     for(int i=0;i<sizeof(arr);i++){
//         int ans = solve(arr,target-arr[i]);
//         if(ans!=INT_MAX){
//             mini = min(mini,ans+1);
//         }
//     }
//     return mini;
// }

//approach 2
int solve(int arr[], int n, int target, int output) {
    // base case
    if (output == target) {
        return 0;
    }
    if (output > target) {
        return INT_MAX;
    }

    int mini = INT_MAX;

    // solve 1 case
    for (int i = 0; i < n; i++) {
        int ans = solve(arr, n, target, output + arr[i]);
        if (ans != INT_MAX) {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main() {
    int n;
    cout << "Enter size of array :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target :" << endl;
    cin >> target;

    int ans = solve(arr, n, target, 0);
    if (ans == INT_MAX) {
        cout << "It is not possible to reach the target sum." << endl;
    } else {
        cout << "Minimum number of elements required: " << ans << endl;
    }
    return 0;
}

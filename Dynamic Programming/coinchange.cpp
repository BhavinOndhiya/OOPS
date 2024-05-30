#include <bits/stdc++.h>
using namespace std;

int solveUsingRecursion(vector<int>& coins, int amount) {
    // Base case
    if(amount == 0) return 0;
    if(amount < 0) return INT_MAX;

    int mini = INT_MAX;
    for(int i = 0; i < coins.size(); i++) {
        int ans = solveUsingRecursion(coins, amount - coins[i]);
        if(ans != INT_MAX) {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int coinChange(vector<int>& coins, int amount) {
    return solveUsingRecursion(coins, amount);
}

int main() {
    vector<int> coins;
    int amount;
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter the value of coin " << i + 1 << ": ";
        cin >> x;
        coins.push_back(x);
    }
    cout << "Enter the amount: ";
    cin >> amount;
    int ans =  coinChange(coins, amount);  
    if(ans==INT_MAX){
        cout <<"-1"<< endl;
    }
    else{
        cout << ans << endl;
    }
    return 0;
}
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long solveUsingRecursion(int n, vector<long long>& dp) {
    // Base cases
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (dp[n] != -1) return dp[n];

    // Recursive relation with modulo operation
    dp[n] = ((n - 1) * (solveUsingRecursion(n - 1, dp) + solveUsingRecursion(n - 2, dp)) % MOD) % MOD;
    return dp[n];
}
long long solveUsingTabulation(int n){
     // Base cases
    vector<long long>dp(n+1,-1);
    dp[1]=0;
    dp[2]=1;
    if (dp[n] != -1) return dp[n];

    // Recursive relation with modulo operation
    for (int i = 3; i <= n; i++) {
      dp[i] = ((i - 1) * (dp[i - 1] + dp[i - 2]) % MOD) % MOD;
    }
    return dp[n];
}

long long solveUsingspaceoptimization(int n){
      // Base cases
    //vector<long long>dp(n+1,-1);
    long long prev2=0;
    long long prev1=1;
    //if (dp[n] != -1) return dp[n];

    // Recursive relation with modulo operation
    for (int i = 3; i <= n; i++) {
      int curr = ((i - 1) * (prev2 + prev1) % MOD) % MOD;
      //shifting
      prev2=prev1;
      prev1=curr;
    }
    return prev1;
}

long long int countDerangements(int n) {
    // vector<long long> dp(n + 1, -1);
    // return solveUsingRecursion(n, dp);
    return solveUsingspaceoptimization(n);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<countDerangements(n)<<endl;
    return 0;
}
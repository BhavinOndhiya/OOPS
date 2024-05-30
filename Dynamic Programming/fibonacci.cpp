#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n, vector<int>& dp){
    //base case
    if(n==1) return 0;
    if(n==2) return 1;

    if(dp[n]!=-1){
        return dp[n];
    }
    //RR
    dp[n] = fibonacci(n-1, dp)+fibonacci(n-2, dp);
    return dp[n];
}

int main(){
    int n;
    cout<<"Enter N :"<<endl;
    cin>>n;
    vector<int> dp(n+1, -1);
    int ans = fibonacci(n, dp);
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}
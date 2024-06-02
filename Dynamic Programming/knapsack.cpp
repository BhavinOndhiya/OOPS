#include<bits/stdc++.h>
using namespace std;

//using recursion
int knapsack(int n, int w, vector<int>& wt, vector<int>& val){
    int maxi = INT_MIN;
    //base case
    if(n == 0 || w == 0){
        return 0;
    }

    //include
    if(wt[n-1]<=w){
        int ans = knapsack(n-1,w-wt[n-1],wt,val);
        maxi = max(maxi,ans+val[n-1]);
    }

    //exclude
    int ans = knapsack(n-1,w,wt,val);
    maxi = max(maxi,ans);
    return maxi;
}

//using memoization
int knapsack(int n, int w, vector<int>& wt, vector<int>& val, vector<vector<int>>& dp){
    int maxi = INT_MIN;
    //base case
    if(n == 0 || w == 0){
        return 0;
    }

    //step-3 : check if the value is already computed
    if(dp[n][w] != -1){
        return dp[n][w];
    }

    //include
    if(wt[n-1]<=w){
        int ans = knapsack(n-1,w-wt[n-1],wt,val,dp);
        maxi = max(maxi,ans+val[n-1]);
    }

    //exclude
    int ans = knapsack(n-1,w,wt,val,dp);
    maxi = max(maxi,ans);
    //step-2 : store the computed value
    dp[n][w] = maxi;
    return maxi;
}

int main(){
    int n,w;
    cout<<"Enter the number of items: ";
    cin>>n;
    cout<<"Enter the capacity of the knapsack: ";
    cin>>w;
    vector<int> wt(n);
    vector<int> val(n);
    cout<<"Enter the weight of the items: ";
    for(int i = 0; i < n; i++){
        cin>>wt[i];
    }
    cout<<"Enter the value of the items: ";
    for(int i = 0; i < n; i++){
        cin>>val[i];
    }
    //using recursion
    //cout<<knapsack(n,w,wt,val)<<endl;

    //using memoization
    //step-1 : create a dp array
    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
    cout<<knapsack(n,w,wt,val,dp)<<endl;
    return 0;
}
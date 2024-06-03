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

//using tabulation
int knapsack(int n, int w,vector<int>& wt, vector<int>& val){
    //declare an vector
    vector<vector<int>> dp(n+1,vector<int>(w+1,0));
    //initialize the dp array
    dp[0][0] = 0;

    //fill the dp array
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            //include
            if(wt[i-1]<=j){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-wt[i-1]]+val[i-1]);
            }
            //exclude
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
}

//using space optimization
int knapsack(int n, int w, vector<int>& wt, vector<int>& val){
    vector<int> prev(w+1,0);
    vector<int> curr(w+1,0);
    
    for(int w = wt[0]; w <= w; w++){
        if(wt[0] <= w){
            prev[w] = val[0];
        }
        else{
            prev[w] = 0;
        }
    }

    for(int i = 1; i < n; i++){
        for(int w = 0; w <= w; w++){
            int include = 0, exclude = 0;
            if(wt[include] <= w){
                include = max(prev[w],prev[w-wt[i]]+val[i]);
            }
            exclude =  0 + prev[w];
        } 
        //shift the values
        prev = curr;
    }
    return prev[w];
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
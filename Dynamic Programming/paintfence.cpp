#include<bits/stdc++.h>
using namespace std;

//Solve using Recursion
int paintFence(int n, int k){
    if(n == 1){
        return k;
    }
    if(n == 2){
        return k+k*(k-1);
    }
    int ans = paintFence(n-2,k)*(k-1) + paintFence(n-1,k)*(k-1);
    return ans;
}
//solve using memoization
int paintFence(int n, int k, vector<int>& dp){
    if(n == 1){
        return k;
    }
    if(n == 2){
        return k+k*(k-1);
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = paintFence(n-2,k,dp)*(k-1) + paintFence(n-1,k,dp)*(k-1);
    return dp[n];
}

//solve using tabulation
int paintFence(int n, int k){
    vector<int> dp(n+1,0);
    dp[1] = k;
    dp[2] = k+k*(k-1);
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-2]*(k-1) + dp[i-1]*(k-1);
    }
    return dp[n];
}

//solve using tabulation with space optimization
int paintFence(int n, int k){
    int prev2 = k;
    int prev1 = k+k*(k-1);
    for(int i = 3; i <= n; i++){
        int curr = prev2*(k-1) + prev1*(k-1);
        //shifting the values
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
   


int main(){
    int n,k;
    cout<<"Enter the number of posts: ";
    cin>>n;
    cout<<"Enter the number of colors: ";
    cin>>k;
    cout<<paintFence(n,k)<<endl;
}
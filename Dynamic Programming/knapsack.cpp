#include<bits/stdc++.h>
using namespace std;

int knapsack(int n, int w, vector<int>& wt, vector<int>& val){
    if(n == 0 || w == 0){
        return 0;
    }
    if(wt[n-1] <= w){
        return max(val[n-1] + knapsack(n-1,w-wt[n-1],wt,val), knapsack(n-1,w,wt,val));
    }
    else{
        return knapsack(n-1,w,wt,val);
    }
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
    cout<<knapsack(n,w,wt,val)<<endl;
    return 0;
}
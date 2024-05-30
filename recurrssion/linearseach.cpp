#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//linear search using 4 parameters
// int linearsearch(int *arr,int s,int e,int target){
//     if(s>e) return -1;
//     if(arr[s]==target) return s;
//     return linearsearch(arr,s+1,e,target);
// }

int linearsearch(int *arr,int n,int target){
    if(n<0) return -1;
    if(arr[n-1]==target) return n-1;
    return linearsearch(arr,n-1,target);
}
int main(){
    int n;
    cin>>n;
    int s=0;
    int e=n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target; cin>>target;
    // int ans = linearsearch(arr,0,n,target);
    int ans = linearsearch(arr,n,target);
    cout<<ans<<endl;
    return 0;
}
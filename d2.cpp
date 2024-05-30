#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt=0;
    int n;
    cin>>n;
    int arr[n];
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j=1;
        while(j<n){
            if(j!=arr[i]){
            cnt++;
            }
            else{
            ans[i] = cnt;
            cnt=0;
            j++;
            }
        }
    }
    
    return 0;
}
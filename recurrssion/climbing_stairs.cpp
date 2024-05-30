#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int climb(int n){
    if(n==0 || n==1) return 1;
    int a = climb(n-1)+climb(n-2);
    return a;
}

int main(){
    int n;
    cout<<"Enter N :"<<endl;
    cin>>n;
    int ans = climb(n);
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}
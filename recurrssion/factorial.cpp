#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1) return 1;
    int a = n*factorial(n-1);
    return a;
}

int main(){
    int n;
    cout<<"Enter N :"<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}
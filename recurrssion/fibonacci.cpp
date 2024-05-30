#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    //base case
    if(n==1) return 0;
    if(n==2) return 1;

    //RR
    int ans = fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter N :"<<endl;
    cin>>n;
    int ans = fibonacci(n);
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}
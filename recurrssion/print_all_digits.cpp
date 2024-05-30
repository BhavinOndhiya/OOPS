#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    //base case
    if(n==0) return;

    int ans  = n%10;
    cout<<ans<<endl;
    // int newn = n/10;
    print(n/10);
}

int main(){
    int n;
    cout<<"Enter N :"<<endl;
    cin>>n;
    print(n);
    return 0;
}
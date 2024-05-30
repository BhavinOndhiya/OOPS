#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int fast(int x, int n){
    //base case
    if(n==0) return 1;
    long long int ans;
    //even
    if(n%2==0){
        ans=fast(x*x,n/2);
    }
    //odd
    else{
        ans=x * fast(x*x,(n-1)/2);
    }
    return ans;
}

int main(){
    long long int a = fast(35,35);
    cout<<a<<endl;
    return 0;
}
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


int main(){
    int n,k;
    cout<<"Enter the number of posts: ";
    cin>>n;
    cout<<"Enter the number of colors: ";
    cin>>k;
    cout<<paintFence(n,k)<<endl;
}
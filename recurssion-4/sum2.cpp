#include<bits/stdc++.h>
using namespace std;

int solve(int n,int x,int y,int z){
    //base case
    if(n==0) return 0;
    if(n<0) return INT_MIN; //INT_MIN is used to return -infinity (to avoid negative values
    //solve 1 case
    int ans1 = solve(n-x,x,y,z)+1;
    int ans2 = solve(n-y,x,y,z)+1;
    int ans3 = solve(n-z,x,y,z)+1;
    int ans = max(ans1,max(ans2,ans3));
    return ans;
}

int main(){
    int n;
    cout<<"Enter Size of Rod :"<<endl;
    cin>>n;
    int x,y,z;
    cout<<"Enter price of 1,2,3 cuts :"<<endl;
    cin>>x>>y>>z;
    int ans = solve(n,x,y,z);
    if(ans<0) ans=0;
    cout<<"No of Possible Rod :"<<ans<<endl;
}
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int i,int& n,int& maxi,int sum){
    //base case
    if(i>=n){
        maxi = max(maxi,sum);
        return;
    }
    //solve 1 case
    //include
    solve(arr,i+2,n,maxi,sum+arr[i]);
    //exclude
    solve(arr,i+1,n,maxi,sum);

}

int main(){
    int n;
    cout<<"Enter size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN;
    int sum = 0;
    cout<<"Maximum sum :"<<endl;    
    solve(arr,0,n,maxi,sum);
    cout<<maxi<<endl;
    return 0;
}
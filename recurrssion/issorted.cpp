#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[] ,int i ,int n){
    //base case
    if(i==n-1){
        return true;
    }

    //recursive case
    if(arr[i+1]<arr[i]){
        return false;
    }

    //RR
    return issorted(arr,i+1,n);
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
    int i=0;
    if(issorted(arr,i,n)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}
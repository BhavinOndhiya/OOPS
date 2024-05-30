#include<bits/stdc++.h>
using namespace std;

void binary_search(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            cout<<"Element found at index :"<<mid<<endl;
            
            return;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    cout<<"Element not found"<<endl;
}

int main(){
    int n;
    cout<<"Enter Size of Array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key :"<<endl;
    cin>>key;
    binary_search(arr,n,key);
    return 0;
}
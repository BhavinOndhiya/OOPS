#include<iostream>
#include<limits.h>
#include<bits/stdc++.h>
using namespace std;

void findmax(int arr[],int n,int i,int &maxi){//if we pass maxi by value then it will not work, we need to pass it by reference
    //base case
    if(i>=n) return;
    //Solve one part
    if(arr[i]>maxi){
        maxi = arr[i];
    }
    //RR
    findmax(arr,n,i+1,maxi);
}

void findmin(int arr[],int n,int i,int &mini){//if we pass maxi by value then it will not work, we need to pass it by reference
    //base case
    if(i>=n) return;
    //Solve one part
    if(arr[i]<mini){
        mini = arr[i];
    }
    //RR
    findmin(arr,n,i+1,mini);
}

int main(){
    int arr[] = {31,15,78,12,19,4,9,39,45,28};
    int n=10;
    int i=0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    findmax(arr,n,i,maxi);
    findmin(arr,n,i,mini);
    cout<<"Maximum Element is :"<<maxi<<endl;
    cout<<"Minimum Element is :"<<mini<<endl;
    return 0;
}
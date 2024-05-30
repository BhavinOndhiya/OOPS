#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> v,int s, int e, int key){
    //base case
    //case-1-> key is not present
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    //case-2-> key is present at mid
    if(v[mid]==key){
        return mid;
    }
    //recursive case
    else if(v[mid]>key){
        return binarysearch(v,s,mid-1,key);
    }
    else{
        return binarysearch(v,mid+1,e,key);
    }
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int key = 5;
    int s = 0;
    int e = v.size()-1;
    int index = binarysearch(v,s,e,key);
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index :"<<index<<endl;
    }
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void present(vector<int>& v,string st,char ch,int i,int n){
    //base case
    if(i>=n) return;//if character is not present in the string
    //check one part
    if(st[i]==ch) {//if character is present in the string
        //cout<<"Present at index :"<<i<<endl;
        v.push_back(i);
    }
    //RR
    return present(v,st,ch,i+1,n);
}

int main(){
    int i=0;
    vector<int> v;
    string st;
    cout<<"Enter String :"<<endl;
    cin>>st;
    int n = st.size();
    char ch;
    cout<<"Enter Character :"<<endl;
    cin>>ch;
    present(v,st,ch,i,n);
    cout<<"Printing Indexes :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
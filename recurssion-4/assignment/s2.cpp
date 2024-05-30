#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string& st,int& s,int& e){
    //base case
    if(s>=e) return;

    //solve 1 case
    swap(st[s],st[e]);

    int ns = s+1;
    int ne = e-1;
    //recurssive case
    return reverse(st,ns,ne);
}   

int main(){
    string st;
    cout<<"Enter string :"<<endl;
    cin>>st;
    int s = 0;
    int e = st.size()-1;
    reverse(st,s,e);
    cout<<"Reversed string :"<<st<<endl;
    return 0;
}
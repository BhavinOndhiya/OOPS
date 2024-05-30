#include<bits/stdc++.h>
using namespace std;

void palindrome(string& st,int s,int e,bool& ans){
    //base case
    if(s>=e) return;

    //solve 1 case
    if(st[s]!=st[e]) ans =false;

    //recursion
    palindrome(st,s+1,e-1,ans);
}
int main(){
    string st;
    cin>>st;
    int s=0;
    int e=st.size()-1;
    bool ans = true;
    palindrome(st,s,e,ans);
    if(ans){
        cout<<"It is a Palindrome"<<endl;
    }
    else{
        cout<<"It is not a Palindrome"<<endl;
    }
    return 0;
}
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> st;
    int n;
    cin>>n;
     int marks;
    string name;
    for(int i=0;i<n;i++){
        cin>>marks>>name;
        st[marks] = name;
    }
    for(auto i : st){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}
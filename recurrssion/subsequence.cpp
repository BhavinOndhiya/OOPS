#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printsubsequence(string st , string output, int i){
    //base case
    if(i>=st.size()){
        cout<<output<<endl;
        return;
    }

    //exclude
    printsubsequence(st,output,i+1);

    //include
    output.push_back(st[i]);
    printsubsequence(st,output,i+1);
}
int main(){
    string st;
    cout<<"Enter string :"<<endl;
    cin>>st;

    string output;
    int i=0;
    printsubsequence(st,output,i);
    return 0;
}
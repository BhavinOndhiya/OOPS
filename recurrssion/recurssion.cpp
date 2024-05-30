#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//for printing 0 to n
// void print(int a,int b){

//     //base case
//     if(a==b) {
//         cout<<a;
//         return;
//     }
//     if(a>b) return;
//     if(a<b) cout<<a<<endl;

//     //recurrsive call
//     print(a+1,b);
// }

//for printing n to 1
void print(int n){
    //base case
    if(n==0) return;

    //processing
    cout<<n<<endl;

    //recurrsion
    print(n-1);
}

int main(){
    int n;
    cout<<"Enter Value of N: ";
    cin>>n;
    print(n);
    return 0;
}
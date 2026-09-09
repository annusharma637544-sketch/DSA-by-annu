#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n=";
    cin>>n;
    int inis=0;
    for(int i=0; i<n;i++){
    for(int j=1; j<=n;j++){
        cout<<"*";
    }
    }
    for(int j=0; j<inis; j++){
        cout<<" ";
    }
    for(int j=1;j<=n-1;j++){
        cout<<"*";
    }
    inis+=2;
    cout<<endl;
}
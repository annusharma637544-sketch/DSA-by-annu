#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number=";
    cin>>n;
    int number=n;
    int sum=0;
    while(n>0){
        int ld= n%10;
        sum= sum+(ld*ld*ld);
        n=n/10;
    }
    if(sum==number){
        cout<<"the given number is armstrong";
    }
    else{
        cout<<"the given number is not a armstrong";
    }
    return 0;
}
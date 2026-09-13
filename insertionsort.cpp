#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1; i<n; i++){
        int curr= arr[i];
        int prev= i-1;
    
    while(prev>=0 && arr[prev]>curr){
        arr[prev+1]= arr[prev];
        prev--;
    }
    arr[prev+1]= curr;
}
}

int main(){
    int n;
    cout<<"enter n=";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
           return 0;

}
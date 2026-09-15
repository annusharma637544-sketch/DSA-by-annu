#include<iostream>
using namespace std;

int checksorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
        return true;
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
    if(checksorted(arr, n)) {
        cout << "Array is sorted";
    }
    else {
        cout << "Array is not sorted";
    }
return 0;
}






#include<iostream>
using namespace std;

void reversearray(int arr[], int n){
    int start = 0;
    int end = n-1;
    if(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
    void printarray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        
        }
        cout<<endl;
    }
int main(){
    int arr[5]={1,2,3,4,5};
    reversearray(arr,5);

    printarray(arr,5);
    return 0;
}


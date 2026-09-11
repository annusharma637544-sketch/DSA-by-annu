#include<iostream>
using namespace std;
reversearray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
       start++;
    end--;
    }
}

int main(){
    int arr[5]= {1,3,4,5,6};
   reversearray(arr,5);
   cout<<"array="<<endl;
   for(int i=0; i<5; i++){
    cout<<arr[i]<<"";
   }
   return 0;
}
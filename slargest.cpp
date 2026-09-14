#include<iostream>
#include<vector>
using namespace std;

 int slargest(vector <int> &arr, int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=0;i<n; i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];

        }
        else if(arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
     }
  return slargest;
}


int main(){
    int n;
    cout<<"enter size of array=";
    cin>>n;
 vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Second largest element = " << slargest(arr,n);
    return 0;
}
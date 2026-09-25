#include<iostream>
#include<vector>
#include<map>
using namespace std;

int longsubarray(vector<int>&arr, int k){
    int sum=0;
    int length=0;
    map<int,int>mp;
    for(int i=0;i<arr.size(); i++){
        sum+=arr[i];
        if(sum==k){
            length= max(length, i+1);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
        if(mp.find(sum-k)!=mp.end()){
            length= max(length, i-mp[sum-k]);
        }
    }
    return length;
}
int main(){
    int k;
    cout<<"enter k="<< endl;
    cin>>k;
    
    int n;

    cout << "Enter no. of elements in an array = ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int lengths = longsubarray(arr,k);

    cout << "longsubarray = " << lengths;

    return 0;
}
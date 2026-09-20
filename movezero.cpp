#include<iostream>
#include<vector>
using namespace std;

vector<int> movezero(int n, vector<int> temp, vector<int> a){

    for(int i=0; i<n; i++){
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }

    int nz = temp.size();

    for(int i=0; i<nz; i++){
        a[i] = temp[i];
    }

    for(int i=nz; i<n; i++){
        a[i] = 0;
    }

    return a;   // ✅ return added
}

int main(){
    int n;

    cout << "enter no. of elements in an array=";
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> temp;       // ✅ temp declared
    arr = movezero(n, temp, arr);  // ✅ correct function call

    cout << "array is=";

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;   // ✅ main returns int
}
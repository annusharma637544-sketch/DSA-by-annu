#include<iostream>
#include<vector>
using namespace std;

int missingnumber(vector<int>& a, int N) {
    int xor1 = 0, xor2 = 0;

    for(int i = 0; i < N-1; i++) {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);
    }

    xor1 = xor1 ^ N;

    return xor1 ^ xor2;
}

int main() {
    int n;

    cout << "Enter n = ";
    cin >> n;

    vector<int> arr(n-1);

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number = " << missingnumber(arr, n);

    return 0;
}
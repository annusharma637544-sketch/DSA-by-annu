#include <iostream>
#include <vector>
using namespace std;

int (vector<int> nums) {

    int maxi = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] == 1) {
            count++;
            maxi = max(maxi, count);
        }
        else {
            count = 0;
        }
    }

    return maxi;
}

int main() {

    int n;

    cout << "Enter no. of elements in an array = ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = maxconsecutiveones(arr);

    cout << "Maximum consecutive 1s = " << ans;

    return 0;
}
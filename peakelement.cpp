#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> arr) {

    int s = 0;
    int e = arr.size() - 1;

    while (s < e) {

        int mid = (s + e) / 2;

        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
    }

    return s;
}

int main() {

    vector<int> arr = {1,3,4,8,5,2};

    int ans = peakIndex(arr);

    cout << "Peak index = " << ans << endl;
    cout << "Peak element = " << arr[ans] << endl;

    return 0;
}
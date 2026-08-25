#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid]) { // Left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}


int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid]) { // Left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;

    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);

    return p;
}


int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 4, 5};

    int key = 4;

    pair<int, int> ans = firstAndLastPosition(arr, arr.size(), key);

    cout << "First position of " << key << " is: " << ans.first << endl;
    cout << "Last position of " << key << " is: " << ans.second << endl;

    return 0;
}
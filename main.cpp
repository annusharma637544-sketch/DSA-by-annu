#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
        return mid;
        }
        if(key>arr[mid])
        {
            start = mid +1;

        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
     return -1;
}
int main(){
    int even[4] = {1,2,3,5};
     int odd[6] = {1,2,3,5,7,8};

     int evenindex = binarysearch(even,4,3);
     cout<<"Index of 4 is"<< evenindex << endl;

       int oddindex = binarysearch(odd,6,7);
     cout<<"Index of 6 is"<< oddindex << endl;

     return 0;
}
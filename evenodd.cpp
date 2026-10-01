#include<iostream>
using namespace std;

bool isEven(int a) {
    //odd
    if(a&1) {
        return 0;
    }
    else { //Even
        return 1;
    }

}

int main() {
    
    int num;
    cout<<"enter num=";
    cin >> num;

    if(isEven(num)) {
        cout <<" Number is Even" <<endl;
    }
    else {
        cout<< " Number is Odd" <<endl;
    }


    return 0;
}

//1 -> Even
// 0 -> odd
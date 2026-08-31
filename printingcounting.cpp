#include<iostream>
using namespace std;
void printingcouting(int num){
    for(int i=1;i<=num;i++){
        cout<<i<<""<<endl;
     }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    printingcouting(n);
    return 0;
}
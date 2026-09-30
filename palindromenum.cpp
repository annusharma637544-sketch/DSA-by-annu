#include<iostream>
#include<vector>
using namespace std;

    bool ispalindrome(int x) {
     if(x<0){
        return false;
         }
         int dup=x;
         long long ans= 0;
         while(x>0){
            int lastdigit= x%10;
           ans = ans * 10 + lastdigit;
            x = x/10;
           
         }
         return dup== ans;
    }
    int main(){
        int x;
        cout<<"enter number=";
        cin>>x;

        cout<<ispalindrome(x)<<endl;
        
    }
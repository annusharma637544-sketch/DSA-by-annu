#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n=";
    cin >> n;

    // First pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Second pattern
    cout<<"second pattern";
       cout<<endl;

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }



    // third pattern
    cout<<"third pattern";
       cout<<endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }


//fourth pattern
    cout<<"fourth pattern";
       cout<<endl;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
           cout << i; 
        }

        cout << endl;
    }


   //fifth pattern
    cout<<"fifth pattern";
       cout<<endl;
 for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << i;
    }
    cout << endl;
}

for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        cout << i;
    }
    cout << endl;
}

return 0;
}
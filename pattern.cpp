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

  //sixth pattern
    cout<<"sixth pattern";
       cout<<endl;

        for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
    cout << "1";
else
    cout << "0";
        }
        cout << endl;
    }

     //seventh pattern
    cout<<"seventh pattern";
       cout<<endl;
    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    
     //eigth pattern
    cout<<"eigth pattern";
       cout<<endl;

for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i == n || j == 1 || j == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

 //ninth pattern
    cout<<"ninth pattern";
       cout<<endl;

// Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }


 //tenth pattern
    cout<<"tenth pattern";
       cout<<endl;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    //eleventh pattern
    cout<<"eleventh pattern";
       cout<<endl;

    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
  //tweleveth pattern
    cout<<"tweleveth pattern";
       cout<<endl;

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        // Increasing numbers
        for (int j = 2; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }

    //thirteenth pattern
    cout<<"thirteenth pattern";
       cout<<endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {

            if (i == n || j == 1 || j == i) {
                cout << j;
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }
 //fourteenth pattern
    cout<<"fourteen pattern";
       cout<<endl;


    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

//fifteenth pattern
    cout<<"fifteenth pattern";
       cout<<endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        int num = 1;

        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }

    
//sixteenth pattern
    cout<<"sixteenth  pattern";
       cout<<endl;

// Increasing pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Decreasing patternn
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //seventeenth patternn
    cout<<"seventeenth  pattern";
       cout<<endl;

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print numbers
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j;
        }

        cout << endl;
    }


    //eighteenth patternn
    cout<<"eighteenth  pattern";
       cout<<endl;

    // Upper half
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }

    // Lower half
    for (int i = 2; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }


return 0;
}
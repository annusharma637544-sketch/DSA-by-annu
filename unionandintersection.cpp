#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> unionArray(vector<int> a, vector<int> b)
{
    set<int> st;

    for(int i = 0; i < a.size(); i++)
    {
        st.insert(a[i]);
    }

    for(int i = 0; i < b.size(); i++)
    {
        st.insert(b[i]);
    }

    vector<int> temp;

    for(auto it : st)
    {
        temp.push_back(it);
    }

    return temp;
}

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cout << "Enter m = ";
    cin >> m;

    vector<int> b(m);

    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> ans = unionArray(a, b);

    cout << "Union = ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
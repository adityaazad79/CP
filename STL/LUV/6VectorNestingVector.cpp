#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void pvec(vector<int> &v) // References the address of the vector
{
    cout << "Size = " << v.size() << endl; // v.size = O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        // vector<int> tv;
        v.push_back(vector<int>()); // pushes a 0 size(empty) vector
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            // tv.push_back(x); // Pushes value inside vector tv
            v[i].push_back(x); // Pushes the value of i in the empty vector
        }
        // v.push_back(tv); // pushes vector tv inside vector v
    }
    for (int i = 0; i < v.size(); i++) // v.size() = Size of the vector at position i
    {
        pvec(v[i]);
    }
    cout << v[0][0] << endl;               // Prints 1st value of the 1st vector
    cout << "Size = " << v.size() << endl; // v.size = O(1)
    v.push_back(vector<int>());            // Pushes an 0 size vector
    cout << "Size = " << v.size() << endl; // v.size = O(1)

    return 0;
}
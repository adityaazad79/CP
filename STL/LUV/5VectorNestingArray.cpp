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
    vector<int> v[N]; // N vectors of size 0. Behaves kinda 2D vector.
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        pvec(v[i]);
    }
    cout << v[0][0] << endl; // Prints 1st value of the 1st vector

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2, 3, 5, 6, 7};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    vector<int>::iterator it = v.begin();
    // or
    // auto it = v.begin();
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << " ";
    //     it++;
    // }
    // cout << endl;

    // for (int value : v) // copies the values
    for (int &value : v) // References the actual values
    {
        // cout << value << " ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it1 = v_p.begin();
    // or
    // auto it = v_p.begin();
    for (pair<int, int> value1 : v_p)
    {
        cout << value1.first << " " << value1.second << endl;
    }
    cout << endl;

    return 0;
}
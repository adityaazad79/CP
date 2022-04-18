/*
Pair Creation and I/O.
Pair Sorting
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    pair<string, int> p;
    vector<pair<string, int>> v;
    // p = {0, 1};
    p = make_pair(0, 1);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        p = make_pair(temp, i);
        // p = {temp, i};
        v.push_back(p);
        // v.push_back(make_pair(temp, i));
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        // int temp;
        // cin >> temp;
        // v.push_back({i, temp});
        cout << v[i].first << " " << v[i].second << endl;
        /*
        While comparing two pairs, we comppare the key first then value.
        p1 = {2, 3};
        p2 = {3, 2};
        Here, p2>p1 as p1.first >p2.first;
        */
    }
    sort(v.begin(), v.end());
    cout << "After Sorting" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    // cout << p.first << " " << p.second << endl;
    for (auto &value : v)
    {
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}
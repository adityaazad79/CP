/*
Nested pair
*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    // vector<int> v(5, 0);
    //  v.push_back(6);
    //  for (auto &value : v)
    //  {
    //      cout << value << endl;
    //  }
    vector<pair<pair<int, int>, pair<int, int>>> v;
    v.push_back({{1, 2}, {3, 4}});
    // cout << v[0].first.first << endl;
    // cout << v[0].first.second << endl;
    // cout << v[0].second.first << endl;
    // cout << v[0].second.second << endl;
    // vector<pair<pair<int, int>, pair<int, int>>> :: iterator it=v.begin();
    auto it = v.begin();
    cout << (*it).first.second << endl;
    return 0;
}
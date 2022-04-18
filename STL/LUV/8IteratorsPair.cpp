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
    // cout << endl;
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it = v_p.begin();
    // or
    // auto it = v_p.begin();
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
        // or // (*it).first <=> (it->first)
        // cout << it->first << " " << it->second << endl; // Used when iterators point to a pair
    }
    cout << endl;

    return 0;
}
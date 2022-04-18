#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void pvec(vector<pair<int, int>> &v) // References the address of the vector
{
    cout << "Size = " << v.size() << endl; // v.size = O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // vector<pair<int, int>> v;
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}}; // We can also initialise like this
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i].first >> v[i].second; // If vector size was earlier zero
        int x, y;
        cin >> x >> y;
        // v.push_back(pair<int, int>(x, y)); // or
        // v.push_back(make_pair(x, y)); // or
        v.push_back({x, y});
    }
    pvec(v);

    return 0;
}
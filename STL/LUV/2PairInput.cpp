#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // pair<int, string> p;
    // cin >> p.first >> p.second; // Take input
    // cout << p.first << " " << p.second << endl;

    pair<int, int> p_array[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> p_array[i].first >> p_array[i].second;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    return 0;
}
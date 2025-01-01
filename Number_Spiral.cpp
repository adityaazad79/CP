#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    ll x, y;

    while (t--)
    {
        cin >> x >> y;

        ll m = max(x, y);

        // No of elements in (m-1) sub-square + elements in one row
        ll mid = (m - 1) * (m - 1) + m;

        /*
        If m is odd, the value increases with col and decreases with row,
        and vice versa.
        */ 
        if (m & 1)
            cout << mid - x + y << endl;
        else
            cout << mid + x - y << endl;
    }

    return 0;
}
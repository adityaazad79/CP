#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<ll> V(n);
    for (auto &it : V)
        cin >> it;

    ll k = 1;
    int j;
    for (j = 0; j < 64; j++)
    {
        for (int i = 1; i < n; i++)
        {
            if ((V[i - 1] & k) != (V[i] & k))
            {
                cout << ll(pow(2, j + 1)) << endl;
                return;
            }
        }
        k = k << 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
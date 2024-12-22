#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    vector<int> V;

    while (t--)
    {
        ll n;
        cin >> n;
        ll res = 0;

        ll lg = log2(n) + 1;

        lg = pow(2, lg);

        while (lg > 0)
        {
            res = res + (n) / lg;
            lg = lg / 2;
        }

        cout << res << endl;
    }

    return 0;
}
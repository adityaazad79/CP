#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

ll bin(string s)
{
    ll x = 0;
    ll y = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            x += y;
        }
        y = 2 * y;
    }
    return x;
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
        int n, k;
        cin >> n >> k;

        vector<int> V(n);
        vector<string> S(n);

        for (int i = 0; i < n; i++)
        {
            cin >> V[i];
            S[i] = bitset<31>(V[i]).to_string();
        }

        int ct = 0;
        for (int i = 0; i < 32; i++)
        {
            ct = 0;
            for (int j = 0; j < n; j++)
            {
                if (S[j][i] == '0')
                {
                    ct++;
                }
            }
            if (ct <= k)
            {
                for (int j = 0; j < n; j++)
                    S[j][i] = '1';
                k -= ct;
            }
            if (k <= 0)
                break;
        }

        ll m = bin(S[0]);
        for (int j = 0; j < n; j++)
        {
            m = m & bin(S[j]);
        }
        cout << m << endl;
    }

    return 0;
}
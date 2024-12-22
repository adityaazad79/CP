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
    while (t--)
    {
        int p, q, r;
        cin >> p >> q >> r;

        string A = (bitset<20>(p)).to_string();
        string B = (bitset<20>(q)).to_string();
        string C = (bitset<20>(r)).to_string();

        ll x = 1;
        int ct = 0;
        for (int i = 0; i < 20; i++)
        {
            ct = 0;
            if (A[i] == '1')
                ct++;

            if (B[i] == '1')
                ct++;

            if (C[i] == '1')
                ct++;

            if (ct == 1)
            {
                cout << 0 << endl;
                break;
            }
            if (ct == 3)
                x = x * 4;
        }
        if (ct == 1)
        {
            continue;
        }
        cout << x << endl;
    }

    return 0;
}
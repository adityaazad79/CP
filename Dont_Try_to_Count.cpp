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

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int ct = 0;
        while (m > n)
        {
            x.append(x);
            n = 2 * n;
            ct++;
        }
        bool flag = 1;
        for (int i = 0; i + m <= n; i++)
        {
            if (x.substr(i, m) == s)
            {
                cout << ct << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            x.append(x);
            n = 2 * n;
            ct++;
            for (int i = 0; i + m <= n; i++)
            {
                if (x.substr(i, m) == s)
                {
                    cout << ct << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
            cout << -1 << endl;
    }

    return 0;
}
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
        int n, x;
        cin >> n >> x;
        ll ct = 0;
        for (int a = 1; a <= x - 2; a++)
        {
            for (int b = 1; a * b <= n; b++)
            {
                int ub = min((n - (a * b)) / (a + b), (x - a - b));
                if (ub > 0)
                {
                    ct += ub;
                }
            }
        }
        cout << ct << endl;
    }

    return 0;
}
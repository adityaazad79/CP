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

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k==0)
        {
            cout << 0 << endl;
        }
        else
        {
            int ct = 1;
            k = k - n;
            int i = 1;
            while (k > 0)
            {
                k = k - (n - i);
                ct++;
                if (k > 0)
                {
                    k = k - (n - i);
                    ct++;
                }
                i++;
            }
            cout << ct << endl;
        }
    }

    return 0;
}
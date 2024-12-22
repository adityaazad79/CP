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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;
        int l = 0, r = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i > 0 && i > l; i--)
        {
            if (s[i] == 'R')
            {
                r = i;
                break;
            }
        }

        int R = r;
        int L = l;
        while (L <= R)
        {
            // cout<<"L : "<<L<<" R : "<<R<<endl;
            bool f1 = 1;
            bool f2 = 1;
            while (l <= r)
            {
                sum += arr[r];
                r--;
            }

            for (int i = L + 1; i < R; i++)
            {
                if (s[i] == 'L')
                {
                    l = i;
                    f1 = 0;
                    break;
                }
            }

            if (!f1)
            {
                for (int i = R - 1; i > 0 && i > l; i--)
                {
                    if (s[i] == 'R')
                    {
                        r = i;
                        f2 = 0;
                        break;
                    }
                }
            }
            // cout << f1 << " " << f2 << endl;
            if (f1 == 1 || f2 == 1)
                break;
            R = r;
            L = l;
        }

        cout << sum << endl;
    }

    return 0;
}
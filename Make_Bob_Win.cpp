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
        string s;
        cin >> s;
        int ct_0 = 0, ct_1 = 0;
        if (s[0] == '0')
            ct_0++;
        else
            ct_1++;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0' && s[i - 1] == '0')
            {
                continue;
            }
            else if (s[i] == '1' && s[i - 1] == '1')
            {
                continue;
            }
            else if (s[i] == '1' && s[i - 1] == '0')
            {
                ct_1++;
            }
            else
                ct_0++;
        }
        if (ct_0 < ct_1)
        {
            cout << 0 << endl;
        }
        else
            cout << ct_1-ct_1+1 << endl;
    }

    return 0;
}
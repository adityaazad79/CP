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
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < 4*n; i++)
        {
            if (s[i] == 'A')
                a++;
            else if (s[i] == 'B')
                b++;
            else if (s[i] == 'C')
                c++;
            else if (s[i] == 'D')
                d++;
        }
        cout << min(a, n) + min(b, n) + min(c, n) + min(d, n) << endl;
    }

    return 0;
}
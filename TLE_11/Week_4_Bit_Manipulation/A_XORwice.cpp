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
        int a, b;
        cin >> a >> b;

        vector<int> s(33, 0);
        int i = 32;
        while (a)
        {
            s[i] = s[i] ^ (a % 2);
            i--;
            a = a / 2;
        }

        i = 32;
        while (b)
        {
            s[i] = s[i] ^ (b % 2);
            i--;
            b = b / 2;
        }

        int x = 0, y = 1;
        i = 32;
        while (i)
        {
            if (s[i] == 1)
                x += y;
            y = y * 2;
            i--;
        }

        cout << x << endl;
    }

    return 0;
}
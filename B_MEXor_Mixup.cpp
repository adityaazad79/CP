#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int xorr(int x)
{
    if (x % 4 == 0)
        return x;
    if (x % 4 == 1)
        return 1;
    if (x % 4 == 2)
        return (x + 1);

    return 0;
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
        int a, b;
        cin >> a >> b;
        int x = xorr(a - 1);

        if (x == b)
            cout << a << endl;
        else if ((x ^ b) == a)
            cout << a + 2 << endl;
        else
            cout << a + 1 << endl;
    }

    return 0;
}
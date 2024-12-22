#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

ll fun(ll n, ll len)
{
    if (n == 1)
        return len;
    if (n % 2 == 0)
    {
        return fun(n / 2, len + 1);
    }
    else
        return fun(3 * n + 1, len + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << fun(n, 1) << endl;

    return 0;
}
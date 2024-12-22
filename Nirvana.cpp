// https://codeforces.com/problemset/problem/1143/B

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll prod(ll k)
{
    ll z = 1;
    while (k != 0)
    {
        z = z * (k % 10);
        k = k / 10;
    }
    return z;
}

void fun(ll n)
{
    ll product = 1;
    ll ans = 0;

    ll temp;
    while (n != 0)
    {
        ans=max(ans,prod(n*product-1));
        n = n / 10;
        product = product * 10;
    }
    cout << ans << endl;
}

int main()
{
    ll n;
    cin >> n;

    fun(n + 1);

    return 0;
}
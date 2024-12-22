#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'

void fun(ll n, ll m, vector<ll> &V)
{
    ll temp;
    if (V.size() == 1)
    {
        if (m >= V[0])
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }
    sort(V.begin(), V.end());
    ll sum = 0;
    temp = 0;
    ll t2 = m;
    ll ct = 0;
    for (ll i = n - 1; i > 0; i--)
    {
        temp = V[i];
        t2 = m - V[i];
        for (ll j = i; j > 0; j--)
        {
            if ((V[i] - V[j - 1]) < 2 && t2 > 0)
            {
                temp = temp + V[j - 1];
                t2 = t2 - V[j - 1];
            }
            else
                break;
        }
        if (sum < temp && t2 >= 0)
        {
            sum = temp;
        }
    }
    cout << sum << endl;
}

void fun2(ll n, ll m, vector<ll> &V)
{
    sort(V.begin(), V.end());
    ll sum = 0, ans = 0;
    for (ll r = 0, l = 0; l <= n;)
    {
        while (r <= n && V[r] - V[l] <= 1 && sum + V[r] <= m)
        {
            sum += V[r];
            r++;
        }
        ans = max(ans,sum);
        sum -= V[l];
        l++;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll temp;
        vector<ll> V;
        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            V.push_back(temp);
        }
        // fun(n,m,V);
        fun2(n, m, V);
    }

    return 0;
}
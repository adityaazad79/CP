#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> V(n);

    for (ll i = 0; i < n; i++)
        cin >> V[i];

    sort(V.begin(), V.end());

    ll m = V[n / 2];

    ll ans = 0;

    for (ll i = 0; i < n; i++)
        ans = ans + abs(m - V[i]);

    cout << ans << endl;

    return 0;
}
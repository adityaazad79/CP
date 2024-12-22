#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fi(a, b) for (ll i = a; i < b; i++)
#define fj(a, b) for (ll j = a; j < b; j++)
#define fk(a, b) for (ll k = a; k < b; k++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vi vector<int>
#define pii pair<int, int>
#define vll vector<ll>
#define MOD 1000000007
#define debug cout << "!!Debug!!" << endl;
#define read(n) \
    ll n;       \
    cin >> n;
#define reads(s) \
    string s;    \
    cin >> s;
#define readc(c) \
    char c;      \
    cin >> c;
#define inpp(A, n) \
    vll A(n);      \
    fi(0, n) cin >> A[i];
#define all(vec) vec.begin(), vec.end()
#define minn(vec) *min_element(all(vec))
#define maxx(vec) *max_element(all(vec))
#define sum(vec) accumulate(all(vec), 0ll)
#define pprint(A) fi(0, A.size()) cout << A[i] << " ";
#define check(A)                          \
    cout << endl;                         \
    cout << "[ ";                         \
    fi(0, A.size()) cout << A[i] << ", "; \
    cout << "]\n"
ll calculate(vll &A, ll n, ll k)
{
    ll prev = 0;
    ll ans = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        ll x = abs(prev) / A[i];
        x++;
        ans += x;
        prev = (-1) * x * A[i];
    }
    prev = 0;
    for (int i = k + 1; i < n; i++)
    {
        ll x = prev / A[i];
        x++;
        ans += x;
        prev = x * A[i];
    }
    return ans;
}
ll get_index(vll v, ll K)
{
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end())
    {
        ll index = it - v.begin();
        return index;
    }
    else
        return -1;
}
ll getBit(ll n, ll pos)
{
    return (n & (1 << pos)) != 0;
}
ll setBit(ll n, ll pos)
{
    return (n | (1 << pos));
}
ll clearBit(ll n, ll pos)
{
    return (n & ~(1 << pos));
}
ll updateBit(ll n, ll pos, ll ch)
{
    n = clearBit(n, pos);
    return (n | (ch << pos));
}
ll getSum(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
ll no1(ll n)
{
    ll c = 0;
    fi(0, 32)
    {
        if (getBit(n, i))
            c++;
    }
    return c;
}
void solve()
{
    read(n);
    inpp(A, n);
    ll ans = A[0];
    for (int i = 0; i < n; i += 2)
    {
        ans = max(ans, A[i]);
    }
    cout << ans;
}
int main()
{
    read(t);
    int k = 1;
    // ll t =1;
    while (t--)
    {
        // cout << "Case #" << k++ << ": ";
        solve();
        cout << endl;
    }
    return 0;
}
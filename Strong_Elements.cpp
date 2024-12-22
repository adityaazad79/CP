#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define outl(x) cout << x << endl;
#define out(x) cout << x << " ";

#ifdef localenv
#define debug(x) \
    _print(x);   \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.f);
    cerr << ",";
    _print(p.s);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int gcd_all(vector<int> &V)
{
    int gcd = V[0];
    for (int i = 1; i < V.size(); i++)
    {
        gcd = __gcd(gcd, V[i]);
    }
    return gcd;
}

// Method 1
void solve2()
{
    int n;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    // if (n == 2)
    // {
    //     if (V[0] == V[1])
    //     {
    //         cout << 1 << endl;
    //     }
    //     else
    //         cout << 2 << endl;
    //     return;
    // }

    int ans = 0;

    int gcd = gcd_all(V);

    // cout<<gcd<<endl;

    if (gcd != 1)
    {
        cout << V.size() << endl;
        return;
    }

    int t_gcd, temp;
    for (int i = 0; i < V.size() - 1; i++)
    {
        temp = V[i];
        V[i] = V[i + 1];
        t_gcd = gcd_all(V);

        if (t_gcd != 1)
            ans++;
        V[i] = temp;
    }

    temp = V[V.size() - 1];
    V[V.size() - 1] = V[0];
    t_gcd = gcd_all(V);

    if (t_gcd != 1)
        ans++;
    V[V.size() - 1] = temp;

    cout << ans << endl;
}

// Method 2
void solve3()
{
    int n;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    if (gcd_all(V) != 1)
    {
        cout << n << endl;
        return;
    }

    vector<int> prefix(n);
    vector<int> suffix(n);

    prefix[0] = V[0];
    suffix[n - 1] = V[n - 1];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = __gcd(prefix[i - 1], V[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = __gcd(suffix[i + 1], V[i]);
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll ans1 = 0;
        ll ans2 = 0;
        if (i != 0)
            ans1 = prefix[i - 1];
        if (i != n-1)
            ans2 = suffix[i + 1];
        if (__gcd(ans1, ans2) != 1)
            ans++;
    }

    cout << ans << endl;
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
        // solve2();
        solve3();
    }

    return 0;
}
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

const ll N = 1e6 + 10;
const int M = 1e9 + 7;

vector<bool> P(N, 1);
vector<ll> Primes;
void sieve()
{
    for (ll i = 2; i * i < N; i++)
    {
        if (P[i])
            for (ll j = i * i; j < N; j += i)
            {
                P[j] = 0;
            }
    }

    // for (int i = 2; i < N; i++)
    // {
    //     if (P[i])
    //         Primes.push_back(i);
    // }

    // for (auto it : Primes)
    //     cout << it << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    ll n;
    cin >> n;

    vector<ll> V(n);
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (P[sqrt(temp)] && (sqrt(temp) == ll(sqrt(temp))))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // cin >> V[i];

    return 0;
}
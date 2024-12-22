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

vector<bool> P(N, 1);
vector<int> Primes;
void sieve()
{
    P[0] = P[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (P[i])
        {
            for (int j = 2 * i; j < N; j += i)
            {
                P[j] = 0;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (P[i])
            Primes.push_back(i);
    }
}

vector<vector<ll>> solve(ll A)
{
    vector<vector<ll>> sol;
    ll s, j;
    // for (int i = 1; i <= A; i++)
    ll i=A*1LL;
    {
        vector<ll> temp;
        s = j = 1;
        while (j <= i)
        {
            temp.push_back(s);
            s = s * (i - j) / j;
            j++;
        }
        sol.push_back(temp);
    }

    return sol;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    vector<vector<ll>> V = solve(n);

    for (ll i = 0; i < V.size(); i++)
    {
        for (ll j = 0; j < V[i].size(); j++)
        {
            cout << V[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
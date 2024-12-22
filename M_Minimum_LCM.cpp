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
vector<int> spf(N);
vector<int> Primes;
void sieve()
{
    for (int i = 0; i < N; i++)
    {
        spf[i] = i;
    }

    P[0] = P[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (P[i])
            for (int j = i * i; j < N; j += i)
            {
                P[j] = 0;
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
    }
    for (int i = 2; i < N; i++)
    {
        if (P[i])
            Primes.push_back(i);
    }

    // for (int i = 0; i < 50; i++)
    // {
    //     // cout<<Primes[i]<<" ";
    //     cout << "i : " << i << " : " << spf[i] << endl;
    // }
}

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
        return;
    }

    vector<int> factor;
    for (int i = 0; n / 2 > Primes[i]; i++)
    {
        if ((n % Primes[i]) == 0)
        {
            factor.push_back(Primes[i]);
            if (Primes[i] != n / Primes[i])
                factor.push_back(n / Primes[i]);
        }
    }

    for (auto it : factor)
        cout << it << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
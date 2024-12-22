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

const int M = 1e9 + 7;

ll N = 10000000;
vector<bool> P(N, 1);
vector<ll> Primes;

void sieve()
{

    for (ll i = 2; i * i < N; i++)
    {
        if (P[i] == 1)
            for (ll j = i * i; j < N; j += i)
            {
                P[j] = 0;
            }
    }

    // vector<ll> Primes;
    for (int i = 2; i < N; i++)
    {
        if (P[i] == 1)
            Primes.push_back(i);
    }

    // for (int i = 2; i < 100; i++)
    //     cout << Primes[i] << " ";
}

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a - b != 1)
    {
        cout << "NO" << endl;
        return;
    }

    ll d = a + b;
    // cout << "d : " << a - b << endl;

    for (int i = 0; i < Primes.size(); i++)
    {
        // if(Primes[i]==11){
        //     cout<<"P : "<<Primes[i]<<endl;
        // }
        // if (Primes[i] == 0)
        //     outl(Primes[i]);
        if (d == Primes[i])
            break;
        if (d % Primes[i] == 0)
        {

            cout << "NO" << endl;
            return;
        }
        // cout<<'sf';
        // cout<<Primes[i]<<" ";
    }

    cout << "YES" << endl;
    return;
}

// void solve()
// {
//     ll a, b;
//     cin >> a >> b;

//     if (a - b != 1)
//     {
//         cout << "NO" << endl;
//         return;
//     }

//     ll d = a + b;
//     for (ll i = 2; i * i <= d; i++)
//     {
//         if (d % i == 0 && ((d % i) != i))
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
//     return;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    // ll N = 100000;
    // vector<bool> P(N, 1);

    // for (int i = 2; i * i < N; i++)
    // {
    //     if (P[i] == 1)
    //         for (int j = i * i; j < N; j += i)
    //         {
    //             P[j] = 0;
    //         }
    // }

    // vector<ll> Primes;
    // for (int i = 2; i < N; i++)
    // {
    //     if (P[i] == 1)
    //         Primes.push_back(i);
    // }

    // for (int i = 2; i < 100; i++)
    // cout<<Primes[i]<<" ";
    sieve();
    // all(Primes);
    // for (int i = 0; i < Primes.size(); i++)
    // {
    //     cout<<Primes[i]<<endl;
    // }

    // cout<<Primes.size()<<endl;
    // outl(Primes.size());
    while (t--)
    {
        // solve(Primes);
        solve();
    }

    return 0;
}
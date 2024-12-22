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
    int mx = -1;
    P[0] = P[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (P[i])
        {
            for (int j = 2 * i; j < N; j += i)
            {
                P[j] = 0;
                // mx = max(max(mx, i), j);
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (P[i])
            Primes.push_back(i);
    }
    // cout<<mx<<" sd"<<endl;
}

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> V(n);
//     bool flag = 0;
//     int m = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> V[i];
//         m = min(m, V[i]);
//         // if (V[i] == 1)
//         //     flag = 1;
//     }

//     if (m == 1)
//     {
//         cout << "YES" << endl;
//         return;
//     }

//     vector<int> comp = V;
//     sort(all(comp));

//     // for (int i = 0; i < n; i++)
//     // {
//     //     cerr << "V[i] : " << V[i] << " comp[i] : " << comp[i] << endl;
//     // }

//     // cerr << "*****" << endl
//     //      << endl;

//     for (int i = 0; i < n; i++)
//     {
//         if (V[i] > (N - 1))
//         {
//             for (int j = 446; j < Primes.size(); j++)
//             {
//                 if (V[i] % Primes[j] == 0)
//                 {
//                     cout << "NO" << endl;
//                     return;
//                 }
//                 if (Primes[j] > 31622)
//                 {
//                     break;
//                 }
//             }
//         }
//         else if (V[i] != comp[i] && P[i] == 1 && V[i] == m)
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }

//     cout << "YES" << endl;

//     // for (int i = 0; i < Primes.size(); i++)
//     // {
//     //     // if (sqrt((N - 1) < Primes[i]))
//     //     if ( Primes[i] > 3162)
//     //     {
//     //         cout << "i : " << i << " Primes[i] : " << Primes[i] << endl;
//     //         break;
//     //     }
//     // }
//     // cout<<sqrt(1e9)<<" : d"<<endl;
// }

void solve2()
{
    int n;
    cin >> n;
    vector<int> V(n);
    bool flag = 0;
    int m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
        m = min(m, V[i]);
    }

    if (m == 1)
    {
        cout << "YES" << endl;
        return;
    }

    vector<int> comp = V;
    sort(all(comp));

    for (int i = 0; i < n; i++)
    {
        if (V[i] != comp[i] && (V[i] % m != 0))
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // sieve();

    int t;
    cin >> t;
    while (t--)
    {
        // solve();
        solve2();
    }

    return 0;
}
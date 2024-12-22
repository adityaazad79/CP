#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
#define pub push_back
#define pob pop_back
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define out(x) cout << x << endl;

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

// vector<bool> Prime(N, 1);
// vector<int> lprime(N, 0), hprime(N, 0);

// void sieve()
// {
//     Prime[0] = Prime[1] = false;
//     for (int i = 2; i < N; i++)
//     {
//         if (Prime[i])
//         {
//             lprime[i] = hprime[i] = i;
//             for (int j = 2 * i; j < N; j += i)
//             {
//                 Prime[j] = 0;
//                 hprime[j] = i;
//                 if (lprime[j] == 0)
//                 {
//                     lprime[j] = i;
//                 }
//             }
//         }
//     }
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    n++;
    vector<int> Lprime(n, 1);
    vector<int> Hprime(n, 1);

    for (int i = 2; i < n / 2; i++)
    {
        if (Lprime[i] == 1)
        {
            Hprime[i] = i;
            for (int j = i + i; j < n; j += i)
            {
                Hprime[j] = i;
                if (Lprime[j] == 1)
                    Lprime[j] = i;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (Lprime[i] != 1)
        {
            cout << "SPF of " << i << " is " << Lprime[i] << " and HPF is " << Hprime[i] << endl;
        }
        // SPF = Smallest Prime Factor
        else
            cout << i << " is a prime itself" << endl;
    }

    // sieve();
    // for (int i = 2; i < n; i++)
    // {
    //     if (Prime[i] == 0)
    //     {
    //         cout << "SPF of " << i << " is " << lprime[i] << " and HPF is " << hprime[i] << endl;
    //     }
    //     // SPF = Smallest Prime Factor
    //     else
    //         cout << i << " is a prime itself" << endl;
    // }

    return 0;
}
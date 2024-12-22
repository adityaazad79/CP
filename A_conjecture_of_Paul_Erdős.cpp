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
void sieve()
{
    for (int i = 2; i * i < N; i++)
        if (P[i])
            for (int j = i * i; j < N; j += i)
                P[j] = 0;
}

vector<ll> Paul;
vector<ll> ct_Paul;
void paul_Conjecture()
{
    vector<ll> sq;
    vector<ll> qu;
    for (int i = 1; i; i++)
    {
        ll temp = i * i;
        if (temp > N)
            break;
        sq.push_back(temp);
    }

    for (int i = 1; i; i++)
    {
        ll temp = i * i * i * i;
        if (temp > N)
            break;
        qu.push_back(temp);
    }

    for (int i = 0; i < sq.size(); i++)
    {
        ll temp1 = sq[i];
        for (int j = 0; j < qu.size(); j++)
        {
            ll temp2 = qu[j] + temp1;
            if (temp2 > N)
                break;
            if (P[temp2])
                Paul.push_back(temp2);
        }
    }

    sort(Paul.begin(), Paul.end());

    int k = 0, j = 0;
    for (int i = 0; i < N; i++)
    {
        if (Paul[j] == Paul[j + 1])
            j++;
        if (i == Paul[j])
        {
            k++;
            j++;
        }
        ct_Paul.push_back(k);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    paul_Conjecture();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << ct_Paul[n] << endl;
    }

    return 0;
}
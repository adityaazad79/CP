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

const int N = 1e5 + 10;
const int M = 1e9 + 7;

vector<bool> P(N, 1);
vector<int> Primes;

void sieve()
{
    for (int i = 2; i * i < N; i++)
    {
        if (P[i])
            for (int j = i * i; j < N; j += i)
            {
                P[j] = 0;
            }
    }

    for (int i = 2; i < N; i++)
    {
        if (P[i])
            Primes.push_back(i);
    }
}

void solve1()
{
    int n;
    cin >> n;

    vector<int> factors;
    int i = 0;

    while (n >= Primes[i])
    {
        while ((n % Primes[i]) == 0)
        {
            factors.push_back(Primes[i]);
            n = n / Primes[i];
        }
        i++;
        if (i == Primes.size())
            break;
    }
    if (n > 1)
        factors.push_back(n);

    unordered_map<int, int> ump;
    for (int i = 0; i < factors.size(); i++)
    {
        ump[factors[i]]++;
    }

    int ans = 1;
    unordered_map<int, int> ans_ump;
    while (1)
    {
        bool flag = 1;
        vector<int> temp;
        for (auto &it : ump)
        {
            if ((it.second) > 0)
            {
                temp.push_back(it.first);
                it.second--;
                flag = 0;
            }
        }
        if (flag)
            break;
        int mul = 1;
        for (auto it : temp)
            mul = mul * it;
        ans_ump[mul]++;
    }
    int sum = 0;
    for (auto it : ans_ump)
        sum = sum + (it.first * it.second);

    cout << sum << endl;
}

void solve2()
{
    int n;
    cin >> n;

    unordered_map<int, int> factors;
    int i = 0;
    while (n >= Primes[i])
    {
        int ct = 0;
        while ((n % Primes[i]) == 0)
        {
            ct++;
            n = n / Primes[i];

            if (factors.count(ct) == 0)
                factors[ct] = Primes[i];
            else
                factors[ct] = factors[ct] * Primes[i];
        }

        i++;
        if (i == Primes.size())
            break;
    }

    if (n > 1)
        if (factors[1] == 0)
            factors[1] = n;
        else
            factors[1] = factors[1] * n;

    int sum = 0;
    for (auto it : factors)
        sum += it.second;
    cout << sum << endl;
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
        // solve1();
        solve2();
    }

    return 0;
}
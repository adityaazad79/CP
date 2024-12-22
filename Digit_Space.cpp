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

// vector<bool> P(N, 1);
vector<int> SPF(N);
// vector<int> Primes;

void sieve()
{
    for (int i = 0; i < N; i++)
        SPF[i] = i;

    for (int i = 2; i * i < N; i++)
    {
        if (SPF[i] == i)
            for (int j = i * i; j < N; j += i)
            {
                if (SPF[j] == j)
                    SPF[j] = i;
            }
    }

    // for (int i = 0; i < 100; i++)
    // {
    //     if (SPF[i] == 1)
    //         cout << i << " is a prime" << endl;
    //     else
    //         cout << i << " : " << SPF[i] << endl;
    // }

    // for (int i = 0; i < 25; i++)
    //     cout << Primes[i] << " ";
}

void solve()
{
    // int x,y;
    string x, y;
    cin >> x >> y;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    vector<int> v1, v2;
    // set<int> num1, num2;
    do
    {
        if (x[0] != '0')
            v1.push_back(stoi(x));
        // num1.insert(stoi(x));
    } while (next_permutation(x.begin(), x.end()));

    do
    {
        if (y[0] != '0')
            v2.push_back(stoi(y));
        // num2.insert(stoi(y));
    } while (next_permutation(y.begin(), y.end()));

    // vector<int> v1(num1.begin(), num1.end());
    // vector<int> v2(num2.begin(), num2.end());

    // for(auto it:v2)
    //     cout<<it<<" ";
    // cout<<endl;

    // for (auto it : v1)
    //     cout << it << endl;
    // cout << "#" << endl;
    // for (auto it : v2)
    //     cout << it << endl;
    // cout << endl
    //      << "*****" << endl
    //      << endl;

    cout << v1.size() << " : " << v2.size() << endl;

    // unordered_set<int> s1;
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     for (int j = 0; j < Primes.size(); j++)
    //     {
    //         if (v1[i] < Primes[j])
    //             break;
    //         while (v1[i] % Primes[j] == 0)
    //         {
    //             s1.insert(Primes[j]);
    //             v1[i] = v1[i] / Primes[j];
    //         }
    //     }
    //     if (v1[i] > 1)
    //     {
    //         s1.insert(v1[i]);
    //     }
    // }

    // for (auto it : s1)
    //     cout << it << " ";
    // cout << endl
    //      << "*****" << endl
    //      << endl;

    // unordered_set<int> s2;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     for (int j = 0; j < Primes.size(); j++)
    //     {
    //         if (v2[i] < Primes[j])
    //             break;
    //         while (v2[i] % Primes[j] == 0)
    //         {
    //             s2.insert(Primes[j]);
    //             v2[i] = v2[i] / Primes[j];
    //         }
    //     }
    //     if (v2[i] > 1)
    //     {
    //         s2.insert(v2[i]);
    //     }
    // }

    //  for (auto it : s2)
    //     cout << it << " ";
    // cout << endl
    //      << "*****" << endl
    //      << endl;

    unordered_set<int> intersection;

    // for (int elem : s1)
    // {
    //     if (s2.find(elem) != s2.end())
    //         intersection.insert(elem);
    // }

    // if (!intersection.empty())
    //     cout << *max_element(intersection.begin(), intersection.end()) << endl;
    // else
    //     cout << 1 << endl;
}

void solve2()
{
    string x, y;
    cin >> x >> y;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    set<int> s1;
    int temp;
    do
    {
        if (x[0] != '0')
        {
            temp = stoi(x);
            while (temp > 1)
            {
                s1.insert(SPF[temp]);
                temp = temp / SPF[temp];
            }
        }
    } while (next_permutation(x.begin(), x.end()));

    set<int> s2;
    do
    {
        if (y[0] != '0')
        {
            temp = stoi(y);
            while (temp > 1)
            {
                s2.insert(SPF[temp]);
                temp = temp / SPF[temp];
            }
        }
    } while (next_permutation(y.begin(), y.end()));

    set<int> intersection;

    for (int elem : s1)
    {
        if (s2.find(elem) != s2.end())
            intersection.insert(elem);
    }

    if (!intersection.empty())
        cout << *max_element(intersection.begin(), intersection.end()) << endl;
    else
        cout << 1 << endl;
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
        // solve();
        solve2();
    }

    return 0;
}
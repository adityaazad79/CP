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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<bool> P(100010, 1);

    for (int i = 2; i * i < 100010; i++)
    {
        if (P[i])
            for (int j = i * i; j < 100010; j += i)
            {
                P[j] = 0;
            }
    }

    vector<int> Primes;
    for (int i = 2; i < 100010; i++)
    {
        if (P[i])
        {
            // cout<<i<<" ";
            Primes.push_back(i);
        }
    }

    vector<int> Nearest_Prime_Dist(100010);
    Nearest_Prime_Dist[0] = 2;
    Nearest_Prime_Dist[1] = 1;
    int k = 0;
    for (int i = 2; i < 100010; i++)
    {
        // if (P[i])
        //     cout<<i<<" ";
        //     // Primes.push_back(i);

        Nearest_Prime_Dist[i] = (Primes[k] - i);
        // Nearest_Prime_Dist[i] = min((i - Primes[k - 1]), (Primes[k] - i));
        // Nearest_Prime_Dist[i] = min((i - Primes[k]), abs(-10));
        // cout << (i - Primes[k-1]) << " ::: " << (Primes[k] - i) << endl;
        // cout << i << " : " << Nearest_Prime_Dist[i] << endl;
        if (i == Primes[k])
        {
            // cout << Primes[k] << endl;
            k++;
        }
    }

    // for (int i = 0; i < 20; i++)
    // {
    //     cout << i << " : " << Nearest_Prime_Dist[i] << endl;
    // }

    int n, m;
    cin >> n >> m;
    vector<vector<int>> V;
    int t;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            temp.push_back(t);
        }
        V.push_back(temp);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<V[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout<<V[i][j]<<" ";
            V[i][j] = Nearest_Prime_Dist[V[i][j]];
        }
        // cout<<endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << V[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int MIN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < m; j++)
        {
            temp += V[i][j];
        }
        // cout<<temp<<endl;
        MIN = min(MIN, temp);
    }

    for (int i = 0; i < m; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            temp += V[j][i];
        }
        // cout<<temp<<endl;
        MIN = min(MIN, temp);
    }

    cout << MIN << endl;

    return 0;
}
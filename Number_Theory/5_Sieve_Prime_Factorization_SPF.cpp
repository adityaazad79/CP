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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    n++;
    vector<int> SPF(n, 1);

    for (int i = 2; i * i < n; i++)
    {
        if (SPF[i] == 1)
            for (int j = i * i; j < n; j += i)
            {
                if (SPF[j] == 1)
                    SPF[j] = i;
            }
    }

    // for (int i = 2; i < n; i++)
    // {
    //     if(SPF[i]!=1)
    //     cout << "i : " << i << " : " << SPF[i] << endl;
    //     else
    //         cout<<"i : "<<i<<" prime"<<endl;
    // }

    vector<int> ans;
    n--;
    while (n > 1)
    {
        if (SPF[n] == 1)
            SPF[n] = n;
        ans.push_back(SPF[n]);
        n = n / SPF[n];
    }

    for (auto it : ans)
        cout << it << " ";

    return 0;
}
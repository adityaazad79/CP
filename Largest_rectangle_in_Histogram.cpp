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

int largestRectangleArea(vector<int> & heights)
{
    int n =  heights.size();
    vector<int> Smaller_Right(n);
    vector<int> Smaller_Left(n);

    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && ( heights[st.top()] >  heights[i]))
        {
            Smaller_Right[st.top()] = i - 1;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        Smaller_Right[st.top()] = n - 1;
        st.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && ( heights[st.top()] >  heights[i]))
        {
            Smaller_Left[st.top()] = i + 1;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        Smaller_Left[st.top()] = 0;
        st.pop();
    }

    for (int i = 0; i < n; i++)
    {
        Smaller_Right[i] = (Smaller_Right[i] - i + 1) *  heights[i];
        Smaller_Left[i] = (i-Smaller_Left[i]) *  heights[i];
    }

    int ans=-1;
    for (int i = 0; i < n; i++)
        ans=max(ans,(Smaller_Left[i]+Smaller_Right[i]));

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int>  heights(n);

    for (int i = 0; i < n; i++)
    {
        cin >>  heights[i];
    }

    cout << largestRectangleArea( heights) << endl;

    return 0;
}
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

int maxArea(vector<int> &heights)
{
    int n = heights.size();
    vector<int> Smaller_Left(n);
    vector<int> Smaller_Right(n);

    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && (heights[st.top()] > heights[i]))
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
        while (!st.empty() && (heights[st.top()] > heights[i]))
        {
            Smaller_Right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        Smaller_Right[st.top()] = n;
        st.pop();
    }

    // or - 1
    for (int i = 0; i < n; i++)
    {
        Smaller_Left[i] = (i - Smaller_Left[i]) * heights[i];
        Smaller_Right[i] = (Smaller_Right[i] - i) * heights[i];
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        // or -2
        ans = max(ans, Smaller_Left[i] + Smaller_Right[i]);
        // ans = max(ans, ((Smaller_Right[i] - Smaller_Left[i]) * heights[i]));
    }

    return ans;
}

int maximalRectangle(vector<vector<char>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();


    vector<vector<int>> V(row, vector<int>(col, 0));

    for (int i = 0; i < col; i++)
    {
        V[0][i] = matrix[0][i] - 48;
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == '0')
                V[i][j] = 0;
            else
                V[i][j] = V[i - 1][j] + matrix[i][j] - 48;
        }
    }

    int ans = -1;
    for (int i = 0; i < row; i++)
    {
        ans = max(ans, maxArea(V[i]));
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<char> temp;
        for (int j = 0; j < m; j++)
        {
            char t;
            cin >> t;
            temp.push_back(t);
        }
        matrix.push_back(temp);
    }

    cout << maximalRectangle(matrix) << endl;

    return 0;
}
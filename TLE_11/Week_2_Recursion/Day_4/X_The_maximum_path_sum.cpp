#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun(vector<vector<ll>> &V, ll n, ll m, ll &m_sum, ll sum, ll curr_n, ll curr_m)
{
    if (curr_n < 0 || curr_n >= n || curr_m < 0 || curr_m >= m)
    {
        return;
    }

    sum += V[curr_n][curr_m];


    if (curr_n == n - 1 && curr_m == m - 1)
    {
        if (m_sum < sum)
            m_sum = sum;
        return;
    }

    fun(V, n, m, m_sum, sum, curr_n + 1, curr_m);
    fun(V, n, m, m_sum, sum, curr_n, curr_m + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> V(n, vector<ll>(m));

    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> V[i][j];
    ll m_sum = LLONG_MIN;
    fun(V, n, m, m_sum, 0, 0, 0);

    cout << m_sum << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << V[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
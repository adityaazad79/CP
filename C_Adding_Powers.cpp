#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun(int n, int k, double max, vector<ll> &V)
{
    int ct = 0;
    int p = 0;
    double temp = max;
    while (max > 1.0)
    {
        max /= k;
        p++;
    }
    max = temp;

    unordered_map<ll, ll> mp;

    bool flag = 1;
    while (flag)
    {
        flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (V[i] >= ll(pow(k, p)))
            {
                mp[p]++;
                V[i] = V[i] - ll(pow(k, p));
                if (mp[p] > 1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            if (V[i] > 0)
                flag = 1;
        }
        p--;
        if (p < 0)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        if (V[i] > 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> V(n);
        double max = -1;
        int mid = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> V[i];
            if (max < V[i])
            {
                max = V[i];
                mid = i;
            }
        }

        fun(n, k, max, V);
    }

    return 0;
}
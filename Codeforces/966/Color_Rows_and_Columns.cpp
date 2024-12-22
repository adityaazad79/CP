#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

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
        vector<vector<int>> V(n, vector<int>(2));
        // int V[n][2];
        for (int i = 0; i < n; i++)
        {
            cin >> V[i][0];
            cin >> V[i][1];
        }

        sort(V.begin(), V.end(), [](vector<int> &a, vector<int> &b)
             { return min(a[0], a[1]) < min(b[0], b[1]); });

        int ops = 0, curr_k = 0;
        // cout<<V[0][0]<<" "<<V[0][1]<<endl;
        for (int i = 0; i < n; i++)
        {
            // cout<<"adsf";
            if ((k) <= max(V[i][0], V[i][1]))
            {
                int rq = k * min(V[i][0], V[i][1]);
                ops = ops + rq * min(V[i][0], V[i][1]);
                k = k - max(V[i][0], V[i][1]);
                cout<<"k"<<rq<<endl;
            }
            else
            {
                ops = ops + V[i][0] * V[i][1];
                k = k - max(V[i][0], V[i][1]);
            }
        }
        if (k <= 0)
        {
            cout << ops << endl;
        }
        else
            cout << -1 << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << V[i][0] << " ";
        //     cout << V[i][1] << endl;
        // }
    }

    return 0;
}
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
    int n, x;
    while (t--)
    {
        cin >> n >> x;
        vector<int> V;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            V.push_back(temp);
        }
        sort(V.begin(), V.end());
        int max = V[0];
        for (int i = 1; i < n; i++)
        {
            if (max < V[i] - V[i - 1])
                max = V[i] - V[i - 1];
        }
        if (V[V.size() - 1] < x)
            max = std::max(max, 2 * (x - V[V.size() - 1]));
        cout << max << endl;
    }

    return 0;
}
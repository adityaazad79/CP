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
        int n;
        cin >> n;
        int temp;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (i % 2 == 0 && ans < temp)
            {
                ans = temp;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
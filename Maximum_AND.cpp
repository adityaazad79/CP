#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

bool compare(pair<ll, ll> &A, pair<ll, ll> &B)
{
    if (A.first != A.second)
        return A.first > B.first;
    return A.second < B.second;
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
        vector<int> A(n);

        vector<int> freq(32, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            int j = 0;
            while (j < 32)
            {
                if (A[i] & (1 << j))
                    freq[31 - j]++;
                j++;
            }
        }

        vector<pair<ll, ll>> val(32);

        ll mul = 1;
        ll temp;
        for (int i = 0; i < 32; i++)
        {
            temp = 0;
            if (freq[31 - i])
                temp = mul * 1LL * (freq[31 - i]);
            val[31 - i] = {temp, (31 - i)};
            mul *= 2;
        }

        sort(val.begin(), val.end());

        int ans = 0;
        for (int i = 31; i > 31 - k; i--)
        {
            ans = ans + (1 << (31 - val[i].second));
        }

        // sort(val.begin(), val.end(), compare());

        cout << ans << endl;
    }

    return 0;
}
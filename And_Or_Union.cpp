#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int bin(vector<int> V)
{
    int t = 1;
    int ans = 0;
    for (int i = 0; i < V.size(); i++)
    {
        if (V[i] > 1)
        {
            ans += t;
        }
        t *= 2;
    }
    return ans;
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
        int n;
        cin >> n;

        int num;
        vector<int> freq(32, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            bitset<32> temp(num);
            for (int i = 31; i >= 0; i--)
            {
                if (temp[i] == 1)
                    freq[i]++;
            }
        }

        cout << bin(freq) << endl;
    }

    return 0;
}
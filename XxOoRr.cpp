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
        int V;
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++)
        {
            cin >> V;
            int temp = V;
            string s = "";
            while (temp)
            {
                if (temp % 2 == 1)
                    s.push_back('1');
                else
                    s.push_back('0');
                temp = temp / 2;
            }
            for (int i = 0; i < s.length(); i++)
                if (s[i] == '1')
                    ump[i]++;
        }
        int sum = 0;
        for (auto it : ump)
            sum += ceil(it.second / (k * 1.0));

        cout << sum << endl;
    }

    return 0;
}
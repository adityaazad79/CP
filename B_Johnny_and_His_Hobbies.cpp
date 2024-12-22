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
        unordered_set<int> S;
        int temp;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            S.insert(temp);
        }

        for (int i = 1; i < 1024; i++)
        {
            unordered_set<int> ts;
            for (auto s : S)
                ts.insert(s ^ i);

            if (ts == S)
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> V(n);
    //     vector<int> freq(1024, 0);

    //     int max = -1;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> V[i];
    //         freq[V[i]]++;
    //     }

    //     int ans = -1;
    //     bool flag = 0;
    //     for (int i = 1; i < 1024; i++)
    //     {
    //         vector<int> temp_freq(1024, 0);
    //         bool fl = 0;
    //         for (int j = 0; j < n; j++)
    //         {
    //             if ((V[j] ^ i) > 1024)
    //             {
    //                 fl = 1;
    //                 break;
    //             }
    //             temp_freq[V[j] ^ i]++;
    //         }
    //         if (fl)
    //             continue;

    //         flag = 1;
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (freq[j] != temp_freq[j])
    //             {
    //                 flag = 0;
    //                 break;
    //             }
    //         }

    //         if (flag == 1)
    //         {
    //             ans = i;
    //             break;
    //         }
    //     }
    //     cout << ans << endl;
    // }

    return 0;
}
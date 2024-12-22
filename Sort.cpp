// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         string a, b;
//         cin >> a;
//         cin >> b;

//         while (q--)
//         {
//             string t1;
//             string t2;
//             int l, r;
//             cin >> l >> r;
//             l--;
//             r--;
//             int ct = 0;

//             for (int i = l; i <= r; i++)
//             {
//                 t1.push_back(a[i]);
//                 t2.push_back(b[i]);
//             }

//             unordered_map<char, int> ump1;
//             unordered_map<char, int> ump2;

//             for (int i = 0; i < r - l + 1; i++)
//             {
//                 ump1[t1[i]]++;
//                 ump2[t2[i]]++;
//             }

//             for (int i = 0; i < r - l + 1; i++)
//             {
//                 if (ump1[t2[i]] != -1 && ump2[t2[i]] != -1 && ump1[t2[i]] < ump2[t2[i]])
//                 {
//                     ct = ct + ump2[t2[i]] - ump1[t2[i]];
//                     ump1[t2[i]] = -1;
//                     ump2[t2[i]] = -1;
//                 }
//             }
//             cout << ct << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e5 + 10;
const int M = 1e9 + 7;

// int V[2][26][N];

// string S[2];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, q, l, r;
    // string a, b;
    vector<string> S(2);
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        // cin >> a >> b;
        cin >> S[0] >> S[1];

        vector<vector<vector<int>>> V(2, vector<vector<int>>(26, vector<int>(n+1, 0)));

        // for (int i = 0; i < 1; i++)
        // {
        //     for (int j = 0; j < 26; j++)
        //     {
        //         for (int k = 0; k < n; k++)
        //         {
        //             V[j][j][k] = 0;
        //         }
        //     }
        // }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (k == 0)
                        V[i][j][k] = (S[i][k] - 'a' == j);
                    else
                        V[i][j][k] = V[i][j][k - 1] + (S[i][k] - 'a' == j);
                        // V[i][j][k+1] = V[i][j][k] + (S[i][k] - 'a' == j);
                }
            }
        }

        // for (int i = 0; i < 2; i++)
        // {
        //     for (int j = 0; j < 26; j++)
        //     {
        //         cout << char(j + 'a') << " : ";
        //         for (int k = 0; k < n; k++)
        //         {
        //             cout << V[i][j][k] << " ";
        //             // V[i][j][k]++;
        //         }
        //         cout << endl;
        //     }
        //     cout << endl;
        // }

        while (q--)
        {
            cin >> l >> r;
            l--;
            ll ct = 0;
            for (int i = 0; i < 26; i++)
            {
                ll temp1, temp2;
                temp1 = V[0][i][r-1] - V[0][i][l-1];
                temp2 = V[1][i][r-1] - V[1][i][l-1];
                ct = ct + abs(temp1 - temp2);
            }
            cout << ct / 2 << endl;
        }
    }

    return 0;
}
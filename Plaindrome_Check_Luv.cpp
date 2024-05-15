INCOMPLETE

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
//         string s;
//         int q;
//         cin >> q;
//         cin >> s;
//         int n = s.size() + 1;
//         int hash[n][26];
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < 26; j++)
//             {
//                 hash[i][j] = 0;
//             }
//         }
//         for (int i = 1; i < n; i++)
//         {
//             hash[i][s[i] - 'a']++;
//         }
//         // for (int i = 0; i < n; i++)
//         // {
//         //     for (int j = 1; i < 26; j++)
//         //     {
//         //         hash[i][j]+=hash[i][j-1];
//         //     }
//         // }
//         for (int i = 0; i < 26; i++)
//         {
//             for (int j = 1; j < n; j++)
//             {
//                 hash[j][i] += hash[j - 1][i];
//             }
//         }

//         while (q--)
//         {
//             int l, r;
//             cin >> l >> r;
//             l--;
//             r--;
//             // int ct = 0;
//             // for (int i = l; i <= r; i++)
//             // {
//             //     for (int j = 0; j < 26; j++){
//             //         cout<<"j : "<<j<<" hash : "<<hash[i][j]<<endl;
//             //         if (hash[i][j] % 2)
//             //             ct++;
//             //     }
//             // }
//             for (int i = l; i<=r; i++)
//             {
//                 hash[s[i]-'a']++;
//             }
            
//             if (ct > 1)
//                 cout << "NO" << endl;
//             else
//                 cout << "YES" << endl;
//         }
//     }
//     return 0;
// }
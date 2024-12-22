#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// Method 1
// int helper(vector<vector<int>> &statements, int mask)
// {
//     for (int i = 0; i < statements.size(); i++)
//     {
//         if (mask & (1 << i))
//         {
//             for (int j = 0; j < statements.size(); j++)
//             {
//                 bool good = (mask & (1 << j)) ? 1 : 0;
//                 if ((good && statements[i][j] == 0) || (!good && statements[i][j] == 1))
//                     return 0;
//             }
//         }
//     }

//     return 1;
// }

// Method 2
int helper2(vector<vector<int>> &statements, bitset<15> mask)
{
    for (int i = 0; i < statements.size(); i++)
        if (mask[i] == 1)
            for (int j = 0; j < statements.size(); j++)
                if ((mask[j] && statements[i][j] == 0) || (!mask[j] && statements[i][j] == 1))
                    return 0;

    return 1;
}

int maximumGood(vector<vector<int>> &statements)
{
    int ans = 0;

    // Method 1
    // for (int mask = 0; mask < (1 << statements.size()); mask++)
    //     if (helper(statements, mask))
    //         ans = max(ans, __builtin_popcount(mask));

    // Method 1
    for (int mask = 0; mask < (1 << statements.size()); mask++)
    {
        bitset<15> bit(mask);
        if (helper2(statements, mask))
            ans = max(ans, __builtin_popcount(mask));
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    // vector<int> num(n,vector<int>(n));
    vector<vector<int>> num(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> num[i][j];
        }

    cout << maximumGood(num) << endl;
    // cout<<(0&& )<<endl;

    // for (auto it : num)
    //     cout << it << " ";
    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {
    //         // cin >> num[i][j];
    //         cout << num[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
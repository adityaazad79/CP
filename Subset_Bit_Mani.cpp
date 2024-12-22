#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// Method1
// vector<vector<int>> subsets(vector<int> &nums)
// {
//     vector<vector<int>> ans(int(pow(2, nums.size())));
//     for (int i = 0; i < int(pow(2, nums.size())); i++)
//     {
//         bitset<32> S(i);
//         for (int j = 0; j < nums.size(); j++)
//             if (S[j] == 1)
//                 ans[i].push_back(nums[j]);
//     }

//     return ans;
// }

// Method2
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans(int(pow(2, nums.size())));
    for (int mask = 0; mask < (1 << nums.size()); mask++)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (mask & (1 << i))
                ans[mask].push_back(nums[i]);
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Find all the subsets
    int n;

    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<vector<int>> ans = subsets(A);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
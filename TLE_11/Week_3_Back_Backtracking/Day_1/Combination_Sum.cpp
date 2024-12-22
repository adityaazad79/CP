#include <bits/stdc++.h>

using namespace std;

void generate(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp, int sum, int index)
{
    if (sum == target)
    {
        ans.push_back(temp);
        return;
    }
    if (sum > target || index == candidates.size())
    {
        return;
    }

    if (sum < target)
    {
        temp.push_back(candidates[index]);
        generate(candidates, target, ans, temp, sum + candidates[index], index);
        temp.pop_back();
    }

    generate(candidates, target, ans, temp, sum, index + 1);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> temp;

    generate(candidates, target, ans, temp, 0, 0);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> V(n);

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    vector<vector<int>> ans;

    ans = combinationSum(V, target);

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
#include <bits/stdc++.h>

using namespace std;

void generate(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp, int index)
{
    if (target==0)
    {
        ans.push_back(temp);
        return;
    }

    for (int i = index; i < candidates.size(); i++)
    {
        if (i > index && candidates[i - 1] == candidates[i])
            continue;
        if (candidates[i] > target)
            break;
        temp.push_back(candidates[i]);
        generate(candidates, target-candidates[i], ans, temp, i + 1);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> temp;
    sort(candidates.begin(), candidates.end());
    generate(candidates, target, ans, temp, 0);

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

    ans = combinationSum2(V, target);

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
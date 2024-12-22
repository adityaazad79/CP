#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void generate(vector<int> &V, vector<vector<int>> &ans, vector<int> &temp, int n, int curr)
{
    if (curr == n)
    {
        ans.push_back(temp);
        return;
    }
    generate(V, ans, temp, n, curr + 1);

    temp.push_back(V[curr]);
    generate(V, ans, temp, n, curr + 1);
    temp.pop_back();
}

vector<vector<int>> fun(vector<int> &V)
{
    vector<int> temp;
    vector<vector<int>> ans;

    int n = V.size();

    generate(V, ans, temp, n, 0);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    vector<vector<int>> ans;
    ans = fun(V);

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
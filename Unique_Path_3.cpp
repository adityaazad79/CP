#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void calculate(vector<vector<int>> &grid, int &ans, int ct, int *dx, int *dy, int row, int col)
{
    if (row >= grid.size() || row < 0 || col >= grid[0].size() || col < 0)
        return;

    if (grid[row][col] == -1)
        return;

    if (grid[row][col] == 2)
    {
        if (ct == -1)
        {
            ans++;
            return;
        }
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int temp = grid[row][col];
        grid[row][col] = -1;
        int a = row + dx[i];
        int b = col + dy[i];
        calculate(grid, ans, ct - 1, dx, dy, a, b);
        grid[row][col] = temp;
    }
}

int uniquePathsIII(vector<vector<int>> &grid)
{
    int ans = 0;
    int sourcei = -1;
    int sourcej = -1;
    int ct = 0;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                sourcei = i;
                sourcej = j;
            }
            else if (grid[i][j] == 0)
                ct++;
        }
    }

    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {-1, 1, 0, 0};

    calculate(grid, ans, ct, dx, dy, sourcei, sourcej);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    cout << "uniq p : " << uniquePathsIII(grid) << endl;

    return 0;
}
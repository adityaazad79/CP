#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void calcQueen(int n, vector<vector<string>> &ans, vector<string> &pos, int row)
{
    if (row == n)
    {
        ans.push_back(pos);
        return;
    }
    for (int k = 0; k < n; k++)
    {
        bool isSafe = true;

        // Columns
        for (int col = 0; col < row; col++)
        {
            if (pos[col][k] == 'Q')
            {
                isSafe = 0;
                break;
            }
        }

        // Upper-Left
        for (int i = row - 1, j = k - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (pos[i][j] == 'Q')
            {
                isSafe = 0;
                break;
            }
        }
        // Upper-Right
        for (int i = row - 1, j = k + 1; i >= 0 && j < n; i--, j++)
        {
            if (pos[i][j] == 'Q')
            {
                isSafe = 0;
                break;
            }
        }
        if (isSafe)
        {
            pos[row][k] = 'Q';
            calcQueen(n, ans, pos, row + 1);
            pos[row][k] = '-';
        }
    }
}

vector<vector<string>> solveNQueen(int n)
{
    vector<vector<string>> ans;

    vector<string> pos;
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        temp.push_back('-');
    }
    for (int i = 0; i < n; i++)
    {
        pos.push_back(temp);
    }

    calcQueen(n, ans, pos, 0);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<vector<string>> ans;

    ans = solveNQueen(n);

    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << endl;
        }
        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// void calcQueen(int n, vector<vector<string>> &ans, vector<string> &pos, int row)
// {
//     if (row == n)
//     {
//         ans.push_back(pos);
//         return;
//     }

//     for (int col = 0; col < n; col++)
//     {
//         bool isSafe = true;

//         // Check column
//         for (int i = 0; i < row; i++)
//         {
//             if (pos[i][col] == 'Q')
//             {
//                 isSafe = false;
//                 break;
//             }
//         }

//         // Check upper-left diagonal
//         for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
//         {
//             if (pos[i][j] == 'Q')
//             {
//                 isSafe = false;
//                 break;
//             }
//         }

//         // Check upper-right diagonal
//         for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
//         {
//             if (pos[i][j] == 'Q')
//             {
//                 isSafe = false;
//                 break;
//             }
//         }

//         // If it's safe to place a queen
//         if (isSafe)
//         {
//             pos[row][col] = 'Q';
//             calcQueen(n, ans, pos, row + 1);
//             pos[row][col] = '-'; // Backtrack
//         }
//     }
// }

// vector<vector<string>> solveNQueen(int n)
// {
//     vector<vector<string>> ans;

//     vector<string> pos(n, string(n, '-'));

//     calcQueen(n, ans, pos, 0);

//     return ans;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     vector<vector<string>> ans;

//     ans = solveNQueen(n);

//     for (auto &it : ans)
//     {
//         for (auto &i : it)
//         {
//             cout << i << endl;
//         }
//         cout << endl;
//     }

//     return 0;
// }
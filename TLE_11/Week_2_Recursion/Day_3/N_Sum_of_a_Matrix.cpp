#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void sum2(int r, int c, vector<vector<int>> &A, vector<vector<int>> &B, int i, int j)
{
    if (j == c)
    {
        cout << endl;
        return;
    }
    cout << A[i][j] + B[i][j] << " ";
    sum2(r, c, A, B, i, j + 1);
}

void sum1(int r, int c, vector<vector<int>> &A, vector<vector<int>> &B, int i, int j)
{
    if (i == r)
    {
        return;
    }
    sum2(r, c, A, B, i, 0);
    sum1(r, c, A, B, i + 1, j);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r, c;
    cin >> r >> c;

    vector<vector<int>> arr1(r, vector<int>(c));
    vector<vector<int>> arr2(r, vector<int>(c));
    int temp;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
        }
    }

    sum1(r, c, arr1, arr2,0,0);

    return 0;
}
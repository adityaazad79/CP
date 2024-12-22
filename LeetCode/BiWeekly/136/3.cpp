#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<vector<int>> V = {{1, 0, 0},
                             {0, 0, 0},
                             {0, 0, 1}};

    // vector<vector<int>> V = {{0, 1},
    //                          {0, 1},
    //                          {0, 0}};

    // vector<vector<int>> V = {{1, 2, 3},
    //                          {4, 5, 6},
    //                          {7, 8, 9}};

    int col = 0, row = 0;

    int r_one = 0, r_mid_one = 0, r_cr1_o = 0;

    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size() / 2; j++)
        {
            if (V[i][j] != V[i][V[i].size() - j - 1])
            {
                row++;
                if (V[i][j] == 1)
                    r_cr1_o++;

                // if(V[i][V[i].size() - j - 1] == 1)
                //     cr2_o++;
            }
            else if (V[i][j] == 1)
            {
                r_one++;
                if (V[i][V[i].size() - j - 1] == 1)
                    r_one++;
            }
            if (V.size() % 2 == 1 && j == V[i].size() / 2)
            {
                if (V[i][j] == 1)
                    r_mid_one++;
            }
        }
    }

    int c_one = 0, c_mid_one = 0, c_cr1_o = 0;

    for (int i = 0; i < V[0].size(); i++)
    {
        for (int j = 0; j < V.size() / 2; j++)
        {
            if (V[j][i] != V[V.size() - 1 - j][i])
            {

                col++;
                if (V[j][j] == 1)
                    c_cr1_o++;
            }
            // if(V[i][V[i].size() - j - 1] == 1)
            //     cr2_o++;
            else if (V[j][i] == 1)
            {
                c_one++;
                if (V[V.size() - 1 - j][i] == 1)
                    c_one++;
            }
            if (V.size() % 2 == 1 && j == V.size() / 2)
            {
                if (V[i][j] == 1)
                    c_mid_one++;
            }
        }
    }

    cout << min(min(), col) << endl;
    // cout << min(row, col) << endl;

    return 0;
}
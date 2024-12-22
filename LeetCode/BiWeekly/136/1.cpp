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
    vector<vector<int>> V = {{1, 0},
                             {1, 7},
                             {1, 3},
                             {5, 3},
                             {2, 3},
                             {5, 1}};

    sort(V.begin(), V.end());

    int max = 0;
    int ct = 0;

    // if(V[0][0]==0)
    //     ct++;

    unordered_map<int, int> ump;
    for (int i = 0; i < V.size() - 1; i++)
    {
        // for (int j = 0; j < 2; j++)
        // {
        //     if(max<V[i][j])
        // }
        if (V[i][1] == V[i + 1][1])
        {
            max++;
            if (max >= V[i][1])
            {
                ct++;
                while (V[i][1] == V[i + 1][i])
                {
                    i++;
                    if (i >= V.size())
                        break;
                }
                max = 0;
            }
        }
    }

    cout << ct << endl;

    // for (int i = 0; i < V.size(); i++)
    // {
    //     for (int j = 0; j < V[0].size(); j++)
    //     {
    //         cout<<V[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // unordered_map<int,unordered_map<int,int>>ump;

    // for (int i = 0; i < V.size(); i++)
    // {
    //     for (int j = 0; j < V[0].size(); j++){
    //         ump[i][V[i][j]]++;
    //     }
    // }

    // for (int i = 0; i < V.size(); i++)
    // {
    //     for (int j = 0; j < V[0].size(); j++){
    //         vu[i][V[i][j]]++;
    //     }
    // }

    return 0;
}
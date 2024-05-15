#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<vector<int>> fun(vector<vector<int>> A)
{
    int size = A.size();
    int tl = size * size;
    vector<vector<int>> sol(2*size-1);

    // int max_sum=(size-1)*(size-1);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sol[i+j].push_back(A[i][j]);
        }
    }

    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
        {
            // sol[i+j].push_back(A[i][j]);
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }

    
    


    return sol;
}

/*
00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> A;
    int t;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            temp.push_back(t);
        }
        A.push_back(temp);
    }

    vector<vector<int>> arr = fun(A);

    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++)
    //         cout<<A[i][j]<<" ";
    //     cout<<endl;
    // }

    return 0;
}
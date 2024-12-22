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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> ump;
        int num, temp;
        vector<vector<int>> V;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            vector<int> tp;
            for (int j = 0; j < num; j++)
            {
                cin >> temp;
                tp.push_back(temp);
                ump[temp]++;
            }
            V.push_back(tp);
        }

        bool flag = 0;
        vector<int>val;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < V[i].size(); j++)
            {
                if (ump[V[i][j]] == 1)
                    break;
                if ((j + 1) == V[i].size()){
                    flag = 1;
                    for (int k = 0; k < V[i].size(); k++)
                    {
                        val.push_back(V[i][k]);
                    }
                    
                }
            }
            if (flag)
                break;
        }
        if (flag){
            cout << "Yes" << endl;
            // for (int i = 0; i < val.size(); i++)
            // {
            //     cout<<val[i]<<" ";
            // }
            // cout<<endl;
            
        }
        else
            cout << "No" << endl;

        
    }

    return 0;
}
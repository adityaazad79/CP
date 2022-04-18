#include <bits/stdc++.h>
using namespace std;
void print (vector<vector<int>> &v){
    cout << v.size() <<endl;
 for (auto &VectoR : v)
    {
        for (auto &val : VectoR)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> v;

    // v[0].push_back(10);
    vector<int> temp;
   
    temp.push_back(10);
    v.push_back(temp);
    // cout << v[0][0] << endl;
    for (int i = 0; i < 2; i++)
    {
        v.push_back(vector<int> ());
        for (int j = 0; j < 5; j++)
        {
            int tem;
            cin >> tem;
            //temp.push_back(tem);
            // cin >> v[0];
            v[i].push_back(tem);
        }
        
    }
    v[2].push_back(10);
    cout << endl;
   print(v);

    return 0;
}

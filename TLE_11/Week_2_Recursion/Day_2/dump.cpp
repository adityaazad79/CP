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

    set<vector<int>>a;
    vector<int>x={1,2,3};
    vector<int>y={3,2,1};
    sort(y.begin(),y.end());
    a.insert(x);
    a.insert(y);

    for(auto it:a){

        for(int i=0;i<it.size();i++)
            cout<<it[i]<<" ";
        cout<<endl;
    }

    return 0;
}
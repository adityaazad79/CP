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
    ll m;
    cin>>n>>m;
    vector<int>V(n);

    map<int,int>ump;
    for (int i = 0; i < n; i++)
    {
        cin>>V[i];
        ump[V[i]]++;
    }
    
    

    return 0;
}
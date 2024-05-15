#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> fun(string A){
    vector<int>ans(26,0);
    int size=A.size();
    for (int i = 0; i < size; i++)
        ans[A[i]-'a']++;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    cin>>A;

    vector<int>V=fun(A);

    for (int i = 0; i < V.size(); i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;

    return 0;
}
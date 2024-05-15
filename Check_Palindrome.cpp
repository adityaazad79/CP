#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A){
    int size=A.size();
    vector<int>ans(26,0);
    for(auto it:A)
        ans[it-'a']=ans[it-'a']^1;
    
    int ct=0;
    for(auto it:ans)
        if(it)
            ct++;
            if(ct>1)
                return 0;
    
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    cin>>A;

    cout<<fun(A)<<endl;

    return 0;
}
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
    int sz=size/2;
    for (int i = 0; i < sz; i++)
    {
        if(A[i]==A[size-1-i])
            continue;
        return 0;
    }
    return 1;
}

int pal(string A){
    vector<string>S;
    string temp="";
    for (int i = 0; i < A.size(); i++)
    {
        temp.push_back(A[i]);
        if(A[i]==' '){
            temp.pop_back();
            S.push_back(temp);
            temp="";
        }
    }
    S.push_back(temp);

    int t,ans=0;
    for (auto it:S)
        ans+=fun(it);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    // cin>>A;
    // A="the fastest racecar";
    // A="wow mom";
    A="eeuoo mm mvudajwjsq gdvj fngnfebnznnznbefngnf jihp mwyvlbhsdyydshblvywm";

    cout<<pal(A)<<endl;

    return 0;
}
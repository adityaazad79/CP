#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(vector<string> A){
    int size=A.size();
    string ans="";
    int st;
    for (int i = 0; i < size; i++)
    {
        st=A[i].size();
        ans.append(A[i]);
        ans.append(to_string(st));
        ans.push_back('~');
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<string>S;
    string A;
    cin>>A;
    for (int i = 0; i < n; i++)
    {
        cin>>A;
        S.push_back(A);
        A="";
    }

    cout<<fun(S)<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(int A){
    string ans;
    while(A){
        if(A&1)
            ans.push_back('1');
        else
            ans.push_back('0');
        A=A>>1;
    }
    if(!ans.size())
        return "0";
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    cout<<fun(n)<<endl;

    return 0;
}
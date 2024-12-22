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
        if(A%26==0)
            ans.push_back('Z');
        else
            ans.push_back(A%26+'A'-1);
        A=(A-1)/26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A;
    cin>>A;

    cout<<fun(A)<<endl;

    return 0;
}
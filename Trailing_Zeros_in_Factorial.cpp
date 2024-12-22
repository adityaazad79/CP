#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A){
    int ans=0;
    for(int i=5;i<=A;i*=5){
        ans+=A/i;
    }
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
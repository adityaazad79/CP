#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

ll fun(ll n){
    if(n==1)
        return 1;
    else if(n==0)
        return 0;
    return n*fun(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    
    cout<<fun(n)<<endl;

    return 0;
}
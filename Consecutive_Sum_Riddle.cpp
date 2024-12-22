// https://codeforces.com/contest/1594/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;

    while (t--)
    {
        ll n;
        cin>>n;
        if(n%2==1)
            cout<<n/2<<" "<<n/2+1<<" : "<<n<<endl;
        else
            cout<<(n-1)*-1<<" "<<n<<" : "<<n<<endl;
    }
    

    return 0;
}
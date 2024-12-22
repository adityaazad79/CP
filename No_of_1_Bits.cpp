#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(unsigned int A){
    int ct=0;
    while(A){
        if(A&1)
            ct++;
        A=A>>1;
    }

    return ct;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned int n;
    cin>>n;
    cout<<fun(n)<<endl;
    
    return 0;
}
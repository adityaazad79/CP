#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

unsigned fun(unsigned int A){
    unsigned int ans=0;
    int i=32;
    while(A){
        if(A&1)
            ans=(ans<<1)|1;
        else
            ans&=0;
        i--;
        A>>=1;
    }
    while(i>0){
        ans<<=1;
        i--;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned int A;
    cin>>A;
    cout<<fun(A)<<endl;

    return 0;
}
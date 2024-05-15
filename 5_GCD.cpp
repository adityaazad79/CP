#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int GCD(int A, int B){
    if(A==0)
        return B;
    return GCD(B%A,A);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m,n;
    cin>>m>>n;

    int g=GCD(m,n);

    cout<<"GCD : "<<n<<" & "<<m<<" : "<<g<<endl;

    return 0;
}
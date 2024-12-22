#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A, int B, int C){
    B=B-1;
    C=C-1;

    int val1 = (A>>B)&1;
    int val2 = (A>>C)&1;

    if(val1==val2)
        return A;

    if(val1==0&&val2==1){
        A=A|(1<<B);
        A=A^(1<<C);
    }
    else if(val1==1&&val2==0){
        A=A^(1<<B);
        A=A|(1<<C);
    }

    return A;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;
    cout<<fun(a,b,c)<<endl;

    return 0;
}
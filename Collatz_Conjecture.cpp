#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

long long fun(int A,int B){
    long long L=A;
    // B--;
    while(--B){
        if(L%2==0)
            L/=2;
        else
            L=L*3+1;
    }
    return L;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A,B;
    cin>>A>>B;

    cout<<fun(A,B)<<endl;

    return 0;
}
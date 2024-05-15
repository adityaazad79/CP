#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A){
    if(A==1)
        return 1;
    
    int num;
    int lim=sqrt(A);
    for (int i=2;i<=lim;i++)
    {
        num=A;
        while(!(num%i))
            num/=i;
        
        if(num==1)
            return 1;
    }
    
    return 0;
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
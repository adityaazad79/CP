#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int fib=1;
    int t1,t2=0;
    cout<<"1 ";
    for (int i = 1; i < n; i++)
    {
        t1=t2;
        t2=fib;
        fib=t2+t1;
        cout<<fib<<" ";
    }
    
    cout<<endl;
    cout<<fib<<endl;

    return 0;
}
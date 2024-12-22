#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A,int B){
    long la=A;
    long lb=B;
    bool flag=0;
    if(la>0 && lb>0)
        flag=0;
    else if(la<0 && lb<0)
        flag=0;
    else
        flag=1;
    if(abs(lb)==1){
        if(abs(la)>=2147483647 && flag)
            return INT_MIN;
        else if(abs(la)>=2147483647)
            return INT_MAX;
        return A;
    }
    int ct=0;
    la=abs(la);
    lb=abs(lb);
    la-=lb;
    while(la>=0){
        la-=lb;
        ct++;
    }
    if(flag)
        return -1*ct;
    else
        return ct;
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
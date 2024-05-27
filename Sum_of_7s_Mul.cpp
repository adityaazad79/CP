#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

long long fun(int A, int B){
    // long long a=A,b=B;
    // if(A%7!=0)
    //     A=A+7-A%7;
    // if(B%7!=0)
    //     B=B-B%7;
    // if(abs(A-B)>abs(a-b))
    //     return 0;
    // long long diff=abs(B-A)/7;
    // // cout<<A<<endl;
    // // cout<<diff<<endl;
    // long long ans=(min(A,B)*(diff+1))+(7*diff*(diff+1))/2;

    // return ans;
    if(double(A)/7.0==A/7)
        A=(A-7)/7;
    else
        A=A/7;
    B=B/7;

    return (B*1LL*(B+1)/2 - A*1LL*(A+1)/2)*7;
}

int main()
{
    int A,B;
    cin>>A>>B;
    cout<<fun(A,B)<<endl;

    return 0;
}
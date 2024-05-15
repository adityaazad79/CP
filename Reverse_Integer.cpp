#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A){
    string s=to_string(A);
    if(s[0]=='-')
        reverse(s.begin()+1,s.end());
    else
        reverse(s.begin(),s.end());

    int x=stoll(s);
    long long i=stoll(s);

    if(x==i)
        return x;
    else
        return 0;
}

int fun2(int A){
    long long rev=0;
    bool flag=0;
    if(A<0){
        flag=1;
        A*=-1;
    }
    int digit=0;
    int B=A;
    // while(B%10 || B/10>0){
    while(B){
        digit++;
        // cout<<"B/10 : "<<B/10<<endl;
        B/=10;
    }
    // cout<<"Digits : "<<digit<<endl;
    int d=pow(10,digit);
    while(A){
        // rev=rev+abs(A%10)*pow(10,digit-1);
        rev=rev*10+A%10;
        // cout<<abs(A%10*(pow(10,digit-1)))<<endl;
        digit--;
        A/=10;
    }
    // cout<<"Rev : "<<rev<<endl;
    if(rev==int(rev)){
        if(flag){
            return (-1*rev);
        }
        return rev;
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
    cout<<fun2(n)<<endl;

    return 0;
}
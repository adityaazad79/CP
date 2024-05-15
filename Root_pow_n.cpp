#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int pow_rec(int n){
    if(n==1)
        return 0;
    return 1+pow_rec(n/2);
}

int pow(int n){
    int k=0;
    while(n/=2)
        k++;
    return k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    // cout<<pow_rec(n)<<endl;
    cout<<pow(n)<<endl;

    return 0;
}
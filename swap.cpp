#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void swap1(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap2(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    // swap1(a,b);
    swap2(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}
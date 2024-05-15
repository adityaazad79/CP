#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A){
    int ct=0;
    while(!(A&1) && A>0){
        ct++;
        A=A>>1;
        // cout<<"fd"<<endl;
    }
    return ct;

    // int count = 0;

    // while ((A & 1) == 0 && A > 0) {
    //     count++;
    //     A >>= 1;
    // }

    // return count;
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
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

    int t;
    cin>>t;
    if(t%4!=0){
        cout<<365<<endl;
    }
    else if(t%4==0 && t%100 !=0){
        cout<<366<<endl;
    }
    else if(t%100==0 && t%400!=0){
        cout<<365<<endl;
    }
    else if(t%400==0){
        cout<<366<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

bool fun(int A){
    string s=to_string(A);
    int size=s.size();
    int sz=size-1;
    size/=2;

    for (int i = 0; i < size; i++)
        if(s[i]!=s[sz--])
            return 0;
    
    return 1;
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
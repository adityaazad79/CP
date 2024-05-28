#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A){
    int size=A.size();

    unordered_map<char,int>umpK;

    int ct=0;
    for (int i=0;i<size;i+=2)
    {
        umpK[A[i]]++;
        if(umpK[A[i+1]+32]>0){
            umpK[A[i+1]+32]--;
        }
        else
            ct++;
    }
    
    return ct;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    string S;
    cin>>S;

    cout<<fun(S)<<endl;

    return 0;
}
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
    int i=0,j=size-1;
    int ans=0,ct=0;
    bool flag=0;
    while(i<j){
        if(A[i]==A[j]){
            ct++;
            i++;
            j--;
            flag=1;
            continue;
        }
        i++;
        j=size-1;
        ans++;
        if(flag){
            ans+=ct;
            ct=0;
            flag=0;
        }
    }
    return ans;
}

int fun2(string A){
    int size=A.size();
    int i=0,j=size-1,ans=0;
    while(i<j){
        if(A[i]==A[j]){
            i++;
            j--;
            continue;
        }
        j=size-1;
        i++;
        ans=i;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    cin>>A;
    cout<<fun(A)<<endl;
    // cout<<fun2(A)<<endl;

    return 0;
}
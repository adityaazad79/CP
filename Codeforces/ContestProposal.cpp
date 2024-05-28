#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void solve2(){
    int n;
    cin>>n;

    vector<int>a(n),b(n);

    for (int i = 0; i < n; i++)
        cin>>a[i];

    for (int i = 0; i < n; i++)
        cin>>b[i];
    
    int min=b[0];

    int j=0,k=0,ct=0;
    for(int i=0;j<n && k<n;i++){
        if(b[j]<a[k]){
            ct++;
            j++;
        }
        else{
            j++;
            k++;
        }
    }

    cout<<ct<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve2();
    }

    return 0;
}
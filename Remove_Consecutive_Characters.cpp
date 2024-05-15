#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(string A,int B){
    int size=A.size();
    string ans;
    int ct=1;
    int j=0,k=0;
    A.push_back('!');
    for (int i = 1; i <= size; i++)
    {
        // cout<<"i : "<<i<<endl;
        if(A[i-1]==A[i]){
            ct++;
            continue;
        }
        // cout<<"ct : "<<ct<<endl;
        if(ct==B){
            j=i;
            ct=1;
            continue;
        }
        while(j<i){
            // ans.push_back(A[j++]);
            A[k++]=A[j++];
        }
        ct=1;
        // cout<<"i : "<<i<<" j : "<<j<<endl;
    }
    int diff=size-k+1;
    while(diff--)
        A.pop_back();
    return A;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int n;
    cin>>s>>n;
    cout<<fun(s,n)<<endl;

    return 0;
}
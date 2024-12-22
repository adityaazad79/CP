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

    int t,n;
    cin>>t;
    char temp;
    while(t--){
        cin>>n;
        vector<char>V;
        int ct=0,ct2=0;
        bool flag=0;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            V.push_back(temp);
            if(temp=='.'){
                ct++;
                ct2++;
                if(ct==3)
                    flag=1;
            }
            else
                ct=0;
        }
        if(flag){
            cout<<2<<endl;
        }
        else
            cout<<ct2<<endl;
        
    }

    return 0;
}
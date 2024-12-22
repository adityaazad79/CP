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
    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[n];
        int ct=0;
        int temp1,temp2;
        bool flag=1;
        cin>>temp1;
        temp1=temp1-d;
        if(temp1>0)
            ct++;
        for (int i = 1; i < n; i++)
        {
            cin>>temp2;
            temp2=temp2-d;
            if(temp1<=0 && temp2<=0){
                temp1=temp2;
                continue;
            }
            else if(temp1>0 && temp2>0){
                temp1=temp2;
                continue;
            }
            else{
                ct++;
                temp1=temp2;
            }
        }
        cout<<ct<<endl;

        
    }

    return 0;
}
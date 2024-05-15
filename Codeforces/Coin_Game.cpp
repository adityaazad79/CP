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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string S;
        cin>>S;

        int p=0,q=S.size()-1;
        bool x=1;
        for (int i = 0; i < n-2; i++)
        {
            S[i]='0';
            if(S[i+1]=='U'){
                S[i+1]='D';
            }
            else
                S[i+1]='U';
            
            if(S[p]=='U')
                S[p]='D';
            else
                S[p]='U';
            x=~x;
        }
        
        cout<<S[n-2]<<endl;
        if(1 && S[n-1]=='U'){
            if(S[n-2]=='D')
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }   

    return 0;
}
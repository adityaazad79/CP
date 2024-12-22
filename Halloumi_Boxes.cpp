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

    int t,k,n,temp;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>V;
        bool flag=0;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            V.push_back(temp);
        }
        if(k!=1){
            cout<<"YES"<<endl;
            continue;
        }
        temp=V[0];
        for (int i = 1; i < n; i++)
        {
            if(temp>V[i]){
                flag=1;
                break;
            }
            temp=V[i];
        }
        if(k==1 && flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
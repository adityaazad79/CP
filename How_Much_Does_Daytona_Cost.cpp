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

    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int temp;
        bool flag=1;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            if(temp==k && flag){
                cout<<"YES"<<endl;
                flag=0;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
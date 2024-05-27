#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        if(n<m){
            cout<<"No"<<endl;
            continue;
        }
        if((n-m)%2==0){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }

    return 0;
}
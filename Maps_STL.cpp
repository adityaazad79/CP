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
    string x;
    int y;
    int tq;
    unordered_map<string,int>ump;
    while(t--){
        cin>>tq;
        if(tq==1){
            cin>>x;
            cin>>y;

            ump[x]+=y;
        }
        else if(tq==2){
            cin>>x;
            ump.erase(x);
        }
        else{
            cin>>x;
            cout<<ump[x]<<endl;
        }
    }

    return 0;
}
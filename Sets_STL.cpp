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
    int x,y;
    unordered_set<int>ust;
    while(t--){
        cin>>y>>x;
        if(y==1){
            ust.insert(x);
        }
        else if(y==2){
            auto it=ust.find(x);
            if(it!=ust.end())
                ust.erase(it);
        }
        else{
            auto it=ust.find(x);
            if(it!=ust.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}
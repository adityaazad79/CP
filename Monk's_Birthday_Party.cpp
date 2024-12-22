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
    int n;
    string temp;
    while(t--){
        cin>>n;
        unordered_set<string>ust;
        for (int i=0;i<n;i++)
        {
            cin>>temp;
            ust.insert(temp);
        }
        set<string>st(ust.begin(),ust.end());
        for(auto it:st)
            cout<<it<<endl;
    }

    return 0;
}
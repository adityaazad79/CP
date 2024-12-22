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
        int n;
        cin>>n;
        if(n<11){
            cout<<"NO"<<endl;
            continue;
        }
        string s=to_string(n);
        if(s[0]=='1' && s[1]=='0' && s[2]!='0'){
            if(s.size()==3 && s[2]=='1')
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
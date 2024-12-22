#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void generate(string s, vector<string>&ans, int len, int tl){
    if(len==tl){
        ans.push_back(s);
        return;
    }

    

}

vector<string> restoreIpAddresses(string s) {
    int len=s.size();
    vector<string>ans;

    string temp="";
    int tl=0;
    generate(s, ans, len, tl);

    return ans; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    vector<string>ans;
    ans=restoreIpAddresses(s);

    for(auto it:s)
        cout<<it<<endl;

    return 0;
}
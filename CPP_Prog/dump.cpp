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

    int n;
    cin>>n;
    cout<<"n : "<<n<<endl;

    string s=to_string(n);

    // cout<<"s[i] : "<<s[0]<<endl;
    int sum=0,i=0;
    while(s[i]){
        sum=sum+(s[i]-'0');
        i++;
    }

    cout<<"s : "<<sum<<endl;

    return 0;
}
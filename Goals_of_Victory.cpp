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

    int t,n;
    cin>>t;
    int sum,temp;
    while(t--){
        sum=0;
        cin>>n;
        n--;
        while(n--){
            cin>>temp;
            sum+=temp;
        }
        cout<<-1*sum<<endl;
    }

    return 0;
}
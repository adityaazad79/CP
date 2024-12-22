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
    vector<int>V(n);
    int max=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>V[i];
        if(max<V[i]){
            max=V[i];
        }
    }
    int min=-1;
    int ans=-1;
    for (int i = 0; i < n; i++)
    {
        if(min<V[i] && V[i]!=max){
            min=V[i];
            ans=i;
        }
    }
    cout<<ans+1<<endl;
    
    

    return 0;
}
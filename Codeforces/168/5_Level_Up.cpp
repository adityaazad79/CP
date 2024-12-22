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

    int n,q;
    cin>>n>>q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m_lev=1;
    int i,x;
    while(q--){
        cin>>i>>x;
        // i--;
        int k=1,j=1;
        if(m_lev>=arr[i]){
            cout<<"YES"<<endl;
            while(x>=k){
                m_lev++;
                x=x-k;
                // j++;
                k++;
            }
        }
        else
            cout<<"NO"<<endl;
    }

    

    return 0;
}
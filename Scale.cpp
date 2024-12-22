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
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string temp;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            if(i%k==0){
                for (int j = 0; j < n; j+=k)
                {
                    if(temp[j]=='0'){
                        cout<<'0';
                    }
                    else
                        cout<<'1';
                }
                cout<<endl;
            }
        }
    }

    return 0;
}
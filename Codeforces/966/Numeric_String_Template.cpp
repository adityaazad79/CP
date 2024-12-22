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
        int arr[n];
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int m;
        cin>>m;
        string s[m];
        bool flag=0;
        for (int i = 0; i < m; i++)
        {
            cin>>s[i];
            if(s[i].size()!=n){
                flag=1;
            }
        }
        
        if(flag){
            cout<<"NO"<<endl;
            continue;
        }

        unordered_map<int,unordered_map<char,char>>ump1;


        // unordered_map<char,int>ump2;

        // for (int i = 0; i < n; i++)
        // {
        //     ump1[arr[i]]++;
        // }
        
        
        
    }

    return 0;
}
// Codechef

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
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>arr;
        int temp;
        n++;
        arr.push_back(0);
        for (int i = 1; i < n; i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        vector<int>fw{n};
        vector<int>bw{n};
        fw[0]=0;
        bw[n]=0;
        for (int i = 2; i < n; i++)
        {
            fw.push_back(__gcd(arr[i-1],arr[i]));
        }
        for (int i = n-1; i >0; i--)
        {
            bw[i]=__gcd(arr[i],arr[i+1]);
        }
        
        
        while(q--){
            int l,r;
            cin>>l>>r;
            int gc=0;
            gc=__gcd(fw[l-1],bw[r+1]);
            cout<<gc<<endl;
        }        
    }
    


    return 0;
}
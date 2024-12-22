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
        vector<int> V(n);
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> V[i];
            if (max < V[i])
                max = V[i];
        }

        // cout << max << endl;
        int d = max / k;

        int min = INT_MAX;
        int max2 = -1;
        int temp;
        for (int i = 0; i < n; i++)
        {
            temp=V[i];
            V[i] = d * k + V[i] % k;
            if(V[i] != temp && (((abs(V[i]-temp))/k)%2 && (abs(V[i]-temp))>k)==1){
                V[i]=V[i]+k;
            }
            if (min > V[i])
                min = V[i];
            if (max2 < V[i])
                max2 = V[i];
        }
        // for(auto it:V)
        //     cout<<it<<" ";
        // cout<<endl;
        // cout<<"min : "<<min<<" max : "<<max2<<endl;
        if(max2-min<k){
            cout<<max<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
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
        int n, s, m;
        cin >> n >> s >> m;
        int arr[n][2];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
            // sum = sum + arr[i][1] - arr[i][0] + 1;
        }
        bool flag = 1;
        // if ((m - sum) >= s)
        // {
        //     cout << "YES" << endl;
        //     flag = 0;
        // }
        if(arr[0][0]>=s){
            cout<<"YES"<<endl;
            flag=0;
        }
        else if((m-arr[n-1][1])>=s){
            cout<<"YES"<<endl;
            flag=0;
        }
        else
            for (int i = 1; i < n; i++)
            {
                if ((arr[i][0] - arr[i - 1][1]) >= s)
                {
                    cout << "YES" << endl;
                    flag = 0;
                    break;
                }
            }
        if (flag)
            cout << "NO" << endl;
    }

    return 0;
}
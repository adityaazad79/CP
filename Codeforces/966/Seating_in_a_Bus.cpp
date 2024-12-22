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
        int n;
        cin >> n;

        vector<bool> V(n, 0);
        // VS
        // vector<bool> V(n);
        // for (int i = 0; i < n; i++)
        // V[i]=0;
        // VS
        // bool V[n]={0};

        int temp;
        cin >> temp;
        temp--;
        V[temp] = 1;
        bool flag = 1;
        for (int i = 1; i < n; i++)
        {
            cin >> temp;
            temp--;
            // if (flag && (temp + 1) == n && V[temp - 1] != 1)
            if (flag && (temp - 1) == n-1 && V[temp - 1] != 1)
                flag = 0;
            else if (flag && temp == 0 && V[1] != 1)
                flag = 0;
            else if (flag && V[temp - 1] != 1 && V[temp + 1] != 1)
                flag = 0;
            else
                V[temp] = 1;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
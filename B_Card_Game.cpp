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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // int c1 = 0, c2 = 0;
        vector<int>A(4,0);

        if (a > c)
            A[0]++;
        if (a > d)
            A[0]++;
        if (b > c)
            A[1]++;
        if (b > d)
            A[1]++;
        if (A[0]+A[1] == 4)
        {
            cout << 4 << endl;
            continue;
        }
        if (c > a)
            A[2]++;
        if (c > b)
            A[2]++;
        if (d > a)
            A[3]++;
        if (d > b)
            A[3]++;
        if (A[2]+A[3] == 4)
        {
            cout << 4 << endl;
            continue;
        }
        if(c1==){
            cout<<0<<endl;
            continue;
        }

    }

    return 0;
}
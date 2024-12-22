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
        int n, x;
        ll y;
        cin >> n >> x;
        cin >> y;
        // Bob = x + 3

        int temp;
        x = (x & 1) ^ 0;
        /*
        x = 1 -> Odd
        x = 0 -> Even
        */

        for (int i = 0; i < n; i++)
        {
            cin >> temp;


            x = x ^ (temp & 1);
            // /*
            // Odd = 1;
            // Even = 0;
            // */
        }

        if (x == (y & 1))
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}
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
        int x, y, k;
        cin >> x >> y >> k;
        ll xmul = k * x;
        ll ymul = k * y;
        // odd
        int i = 1;
        int f = 1;
        int temp;
        if (k % 2 == 1)
        {
            cout << xmul << " ";
            cout << ymul << endl;
            temp = k - 1;

            while (temp--)
            {
                // cout << (f * xmul) + (i * f) << " ";
                // cout << (f * ymul) + (i * f) << endl;
                // i++;
                if (f == 1)
                {
                    cout << f * (xmul + i) << " ";
                    cout << f * (ymul + i) << endl;
                    // i++;
                    f = -1;
                }
                else
                {
                    cout << f * (xmul + i) << " ";
                    cout << f * (ymul + i) << endl;
                    i++;
                    f = 1;
                }
            }
        }
        else
        {
            // cout << xmul / 2 << " ";
            // cout << ymul / 2 << endl;
            // cout << xmul / 2 << " ";
            // cout << ymul / 2 << endl;
            i = 1;
            cout << 1 << " ";
            cout << 1 << endl;
            // if(xmul>0)
                // cout << xmul - i << " ";
            // else
                cout << xmul - i << " ";
            // if(ymul>0)
                // cout << ymul - i << endl;
            // else
                cout << ymul - i << endl;
            i++;
            temp = k - 2;
            while (temp--)
            {
                // cout << (f * xmul) - (i * f) << " ";
                // cout << (f * ymul) - (i * f) << endl;
                // i++;
                if (f == 1)
                {
                    cout << f * (xmul + i) << " ";
                    cout << f * (ymul + i) << endl;
                    // i++;
                    f = -1;
                }
                else
                {
                    //     cout << (f * xmul) + (i * f) << " ";
                    //     cout << (f * ymul) + (i * f) << endl;
                    cout << f * (xmul + i) << " ";
                    cout << f * (ymul + i) << endl;
                    i++;
                    f = 1;
                }
            }
        }
    }

    return 0;
}
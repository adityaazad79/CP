#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int bin(string X)
{
    int t = 1;
    int ans = 0;
    for (int i = X.size() - 1; i >= 0; i--)
    {
        if (X[i] == '1')
        {
            ans += t;
        }
        t = t * 2;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;

        cin >> n >> a >> b;

        if (a == 0 && b == 0)
        {
            cout << 1 << endl;
            continue;
        }

        if (a < b)
        {
            swap(a, b);
        }

        string A = bitset<30>(a).to_string();
        string B = bitset<30>(b).to_string();
        string X = bitset<30>(0).to_string();

        // cout << "A : " << a << endl;
        // cout << "k : " << k << endl;
        bool flag = 1;
        bool flag2 = 1;
        for (int i = 0; i < 30; i++)
        {
            if (flag2 == 1 && A[i] == '0' && B[i] == '0')
            {
                continue;
            }
            flag2 = 0;
            if (A[i] == '1' && B[i] == '1')
            {
                // cout<<"C"<<endl;
                continue;
            }
            if (A[i] == '1')
            {
                if (flag == 1)
                {
                    flag = 0;
                    X[i] = '0';
                }
                else
                    X[i] = '1';
            }
            else if (B[i] == '0')
            {
                X[i] = '1';
            }
        }

        // cout << X << endl;
        int x = bin(X);

        // cout<<(a^x)*(b^x)<<endl;

        cout << x << endl;
    }

    return 0;
}
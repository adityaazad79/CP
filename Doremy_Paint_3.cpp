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

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> V;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            V.push_back(temp);
        }
        if (n == 2)
        {
            cout << "Yes" << endl;
            continue;
        }
        if (n == 3)
        {
            temp = V[0] ^ V[1] ^ V[2];
            if (temp == V[0] || temp == V[1] || temp == V[2])
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
            continue;
        }

        int dif1 = V[0], dif2;
        for (int i = 0; i < n; i++)
        {
            if (V[i] != dif1)
            {
                dif2 = V[i];
                break;
            }
        }
        bool flag = 1;
        // Fiding if more than two distinct elemets are there
        for (int i = 0; i < n; i++)
        {
            if (V[i] != dif1 && V[i] != dif2)
            {
                cout << "No" << endl;
                flag = 0;
                break;
            }
        }

        // If only two diff elements are there
        if (flag)
        {
            int ct1 = 0, ct2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (V[i] == dif1)
                    ct1++;
                else
                    ct2++;
            }
            if (ct1 == 0 || ct2 == 0)
                cout << "Yes" << endl;
            else
            {
                if (abs(ct1 - ct2) == 1 && n % 2)
                {
                    cout << "Yes" << endl;
                }
                else if (ct1 == ct2)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
        }
    }

    return 0;
}
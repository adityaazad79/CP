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
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int k = 0;
        for (int i = s2.size() - 1; i >= 0; i--)
        {
            if (s2[i] == '1')
            {
                break;
            }
            k++;
            s1.pop_back();
        }

        while (k--)
        {
            s2.pop_back();
        }


        int j = 0;
        for (int i = s1.size() - 1; i >= 0; i--)
        {
            j++;
            if (s1[i] == '1')
            {
                break;
            }
        }

        cout << j-1 << endl;
    }

    return 0;
}
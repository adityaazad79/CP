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

    int n, k;
    cin >> n >> k;

    if (n < k)
    {
        cout << "NO" << endl;
        return 0;
    }

    int max_power = log2(n - k + 1);

    vector<int> elem;
    while (n > 0)
    {

        if (k < 0)
        {
            cout << "NO" << endl;
            return 0;
        }
        while ((n - k + 1) >= pow(2, max_power))
        {
            n = n - pow(2, max_power);
            elem.push_back(pow(2, max_power));
            k--;
            if (k < 0)
            {
                break;
            }
            if (n == 0)
                break;
        }
        max_power--;
    }

    if (n != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    for (auto it : elem)
        cout << it << " ";

    return 0;
}
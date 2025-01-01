#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int m = INT_MAX;

    while (q--)
    {
        int query;
        cin >> query;

        if (m > query)
        {
            m = query;
            query = 1 << query;

            for (int i = 0; i < n; i++)
            {
                if ((A[i] & (query - 1)) == 0)
                {
                    A[i] = A[i] + query - 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
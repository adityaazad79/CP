#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
vector<bool> Prime(N, 1);
vector<int> lprime(N, 0), hprime(N, 0), Count(N, 0);

void Seive()
{
    Prime[0] = Prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (Prime[i])
        {
            lprime[i] = hprime[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                Prime[j] = 0;
                hprime[j] = i;
                if (lprime[j] == 0)
                {
                    lprime[j] = i;
                }
            }
        }
    }
}

int main()
{
    Seive();
    for (int i = 1; i < N; i++)
    {
        int n = i, count = 0;
        while (n > 1)
        {
            int temp = hprime[n];
            count++;
            while (n % temp == 0)
            {
                n /= temp;
            }
        }
        Count[i] = count;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, ans = 0;
        cin >> x >> y >> z;
        for (int i = x; i <= y; i++)
        {
            if (Count[i] == z)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
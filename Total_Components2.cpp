#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
vector<bool> Prime(N, 1);
vector<int> Count(N, 0);

void Seive()
{
    Prime[0] = Prime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (Prime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                Prime[j] = 0;
            }
        }
    }
}

int main()
{
    int cl = 0;
    Seive();
    for (int i = 0; i <= N; i++)
    {
        if (Prime[i] == 1)
        {
            cl++;
        }
        Count[i] = cl;
    }
    int t, l;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        l = n / 2;
        int cl;
        if (n == 2 | n == 3)
        {
            cout << Count[n] << endl;
        }
        else
        {
            cout << Count[n] - Count[l] + 1 << endl;
        }
    }

    return 0;
}
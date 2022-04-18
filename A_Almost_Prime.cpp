// Using map

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
const int N = 3000 + 10;
vector<bool> Prime(N, 1);
vector<int> hprime(N, 0);

void Seive()
{
    Prime[0] = Prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (Prime[i])
        {
            hprime[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                Prime[j] = 0;
                hprime[j] = i;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Seive();
    int n, count = 0, t;
    map<int, int> arr;

    for (int i = 2; i < N; i++)
    {

        t = i;
        count = 0;
        while (t > 1)
        {
            int temp = hprime[t];
            count++;
            while (t % temp == 0)
                t /= temp;
        }
        if (count == 2)
        {
            arr.insert({i, i});
        }
    }

    cin >> n;
    int i = 0;
    for (auto val : arr)
    {
        if (val.first == n)
        {
            cout << i + 1 << endl;
            break;
        }
        if (val.first > n)
        {
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}
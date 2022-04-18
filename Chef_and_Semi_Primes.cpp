// luv cp - Youtube

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0, con = 0;
    vector<bool> v(200, false);
    for (int j = 2; j <= 200; j++)
    {
        int n = j;
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            while (n % i == 0)
            {
                n = n / i;
                con++;
            }
        }
        if (con == 2 && count == 2)
        {
            v[j] = true;
        }
        count = 0;
        con = 0;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int flag = 1;
        for (int i = 0; i < num; i++)
        {
            if (v[i])
            {
                int x = (num - i);
                if (v[x])
                {
                    flag = 0;
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
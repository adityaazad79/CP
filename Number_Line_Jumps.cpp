/* https://www.hackerrank.com/challenges/kangaroo/problem */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, v1, x2, v2, flag = 0;
    cin >> x1 >> v1 >> x2 >> v2;
    for (int i = 1; x1 + v1 * i <= x2 + v2 * i; i++)
    {
        if (x1 + v1 * i == x2 + v2 * i)
        {
            cout << "YES\n";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO\n";
    }

    return 0;
}
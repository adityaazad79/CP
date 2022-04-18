/* https://www.codechef.com/START13C/problems/DIWALI1 */

// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int i = 0; i < t; i++)
//     {
//         int p, a, b, c, x, y;
//         scanf("%d%d%d%d%d%d", &p, &a, &b, &c, &x, &y);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int p, a, b, c, x, y, l = 0;
//         scanf("%d%d%d%d%d%d", &p, &a, &b, &c, &x, &y);

//         if (b + x >= c + y)
//             l = a * x + b;
//         else
//             l = a * y + c;
//         printf("%d\n", l);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, a, b, c, x, y, l = 0, m = 0, count = 0;
        cin >> p >> a >> b >> c >> x >> y;
        l = b + x * a;
        m = c + y * a;
        int Max = max(l, m), Min = min(l, m), temp = Min;
        while (p >= temp)
        {
            temp += Min;
            count++;
        }

        if (temp + Max - Min <= p)
            cout << count + 1 << endl;
        else if (temp == p)
            cout << count << endl;
        else
            cout << count << endl;
    }
    return 0;
}
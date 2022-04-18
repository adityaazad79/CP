// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         int count = 0;
//         cin >> n;
//         for (int c = 1; c <= n/2; c++)
//         {
//             for (int b = c; b <= n; b += c)
//             {
//                 if (b % c == 0)
//                 {
//                     for (int a = c; a <= n; a += b)
//                     {
//                         if (a % b == c)
//                         {
//                             count++;
//                         }
//                     }
//                 }
//             }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b, c;
        int x = 0;
        for (int c = 1; c <= n / 2; c++)
        {
            for (int b = 2 * c; b <= n; b += c)
            {
                x += (n - c) / b;
                x++;
            }
        }
        cout << x << endl;
    }
    return 0;
}

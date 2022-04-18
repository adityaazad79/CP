// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         long long int n, c = 0, x;
//         cin >> n;
//         for (int j = 1; j < 1000; j++)
//         {
//             cout << (1 << j) + 1 << " ";
//             c++;
//             if (c == n)
//             {
//                 break;
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans, count = 0;
        cin >> n;
        for (int i = 0; i < 17; i++)
        {
            for (int j = i + 1; j < 18; j++)
            {
                for (int k = j + 1; k < 19; k++)
                {
                    for (int l = k + 1; l < 20; l++)
                    {
                        ans = (1 << i) + (1 << j) + (1 << k) + (1 << l);
                        cout << ans << " ";
                        count++;
                        if (count == n)
                        {
                            break;
                        }
                    }
                    if (count == n)
                    {
                        break;
                    }
                }
                if (count == n)
                {
                    break;
                }
            }
            if (count == n)
            {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
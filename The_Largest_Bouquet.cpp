// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int mg, my, mr, og, oy, ored, pg, py, pr, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
//         cin >> mg >> my >> mr >> og >> oy >> ored >> pg >> py >> pr;
//         c1 = mg + my + mr;
//         cout << c1 << endl;
//         if (c1 & 1==0)
//         {
//             --c1;
//         }
//        // else --c1;
//         cout << c1 << endl;
//         if (c1 & 1 != 0)
//         {
//             c1 -= 1;
//         }
//         c2 = og + oy + ored;
//         if (c2 & 1 == 0)
//         {
//             c2 -= 1;
//         }
//         c3 = pg + py + pr;
//         if (c3 & 1 == 0)
//         {
//             c3 -= 1;
//         }
//         c4 = mg + og + pg;
//         if (c4 & 1 == 0)
//         {
//             c4 -= 1;
//         }
//         c5 = my + oy + py;
//         if (c5 & 1 == 0)
//         {
//             c5 -= 1;
//         }
//         c6 = mr + ored + pr;
//         if (c6 & 1 == 0)
//         {
//             c6 -= 1;
//         }
//         cout << c1 << endl;
//         // cout << c2 << endl;
//         // cout << c3 << endl;
//         // cout << c4 << endl;
//         // cout << c5 << endl;
//         // cout << c6 << endl;
//         // if (c1 >= c2 && c1 >= c3 && c1 >= c4 && c1 >= c5 && c1 >= c6)
//         // {
//         //     cout << c1 << endl;
//         // }
//         // else if (c2 >= c1 && c2 >= c3 && c2 >= c4 && c2 >= c5 && c2 >= c6)
//         // {
//         //     cout << c2 << endl;
//         // }
//         // else if (c3 >= c2 && c3 >= c1 && c3 >= c4 && c3 >= c5 && c3 >= c6)
//         // {
//         //     cout << c3 << endl;
//         // }
//         // else if (c4 >= c2 && c4 >= c3 && c4 >= c1 && c4 >= c5 && c4 >= c6)
//         // {
//         //     cout << c4 << endl;
//         // }
//         // else if (c5 >= c2 && c5 >= c3 && c5 >= c4 && c5 >= c1 && c5 >= c6)
//         // {
//         //     cout << c5 << endl;
//         // }
//         // else if (c6 >= c2 && c6 >= c3 && c6 >= c4 && c6 >= c5 && c6 >= c1)
//         // {
//         //     cout << c6 << endl;
//         // }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define MAX(a, b) a > b ? a : b

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        long long leaves[3][3];
        long long ans = 0, flag = 1, s = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cin >> leaves[i][j];
        }

        for (int i = 0; i < 3; i++)
        {
            long long sum = leaves[i][0] + leaves[i][1] + leaves[i][2];
          //  if (sum % 2 == 0)
               // sum--;
            ans = MAX(ans, sum);
        }

        for (int i = 0; i < 3; i++)
        {
            long long sum = leaves[0][i] + leaves[1][i] + leaves[2][i];
            //if (sum % 2 == 0)
               // sum--;
            ans = max(ans, sum);
        }
if (ans&1)
        cout << ans << endl;
        else  cout << ans-1 << endl;
    }
    return 0;
}
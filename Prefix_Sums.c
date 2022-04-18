// /* https://www.codechef.com/LTIME100C/problems/UNQEQ */

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         if (n % 4 != 0)
//             printf("NO\n");
//         else
//         {
//             printf("YES\n");
//             int a = n / 4, i = 1;
//             while (i <= a)
//             {
//                 printf("%d ", i);
//                 i++;
//             }
//             a = n / 4;
//             while (a)
//             {
//                 printf("%d ", n - a + 1);
//                 a--;
//             }

//             printf("\n");
//             for (int i = n / 4 + 1; i <= n - n / 4; i++)
//             {
//                 printf("%d ", i);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 4 != 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");

            for (int j = 1; j < (n / 4) + 1; j++)
            {
                printf("%d ", j);
            }

            for (int j = (3 * n / 4) + 1; j < n + 1; j++)
            {
                printf("%d ", j);
            }
            printf("\n");

            for (int j = (n / 4) + 1; j < (3 * n / 4) + 1; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }

    return 0;
}
// /* https://www.codechef.com/OCT21C/problems/ANDSUBAR */

// #include <stdio.h>

// int main()
// {
//     int t, i, n, j, c, max;
//     scanf("%d", &t);
//     for (i = 0; i < t; i++)
//     {
//         scanf("%d", &n);
//         c = max = 1;

//         for (j = 1; j < n; j++)
//         {
//             if ((j & (j + 1)) > 0)
//             {
//                 c++;
//                 if (max < c)
//                 {
//                     max = c;
//                 }
//             }
//             else
//             {
//                 c = 1;
//             }
//         }
//         printf("%d\n", max);
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>
long long a[32];
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 32; i++)
    {
        a[i] = pow(2, i);
    }
    
    long int t;
    scanf("%ld", &t);
    while (t--)
    {
        long n, count;
        scanf("%ld", &n);

        for (long i = 0; i < 32; i++)
        {
            if (n < a[i])
            {
                count = i - 1;
                break;
            }
        }

        if ((n - a[count] + 1) > a[count] - a[count - 1])
        {
            printf("%lld\n", (n - a[count] + 1));
        }
        else
        {
            printf("%lld\n", a[count] - a[count - 1]);
        }
    }

    return 0;
}
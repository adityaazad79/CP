/* https://www.hackerrank.com/challenges/kangaroo/problem */

//Incomplete

#include <stdio.h>

int main()
{
    int x1, v1, x2, v2, a, b, x[10000], y[10000], temp;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if (x1 > x2 || v1 > v2)
    {
        a = v1 - x1;
        b = v2 - x2;
        if (b < 0)
        {
            b = -b;
        }

        x[0] = a;
        y[0] = b;
        for (int i = 1; i < 10001; i++)
        {
            x[i] = x[i - 1] + a;
        }
        for (int i = 1; i < 10001; i++)
        {
            y[i] = y[i - 1] + b;
        }
        for (int i = 0; i < 6; i++)
        {
            printf("%d\n", x[i]);
        }

        for (int i = 0; i < 10000; i++)
        {
            for (int j = 0; j < 10000; j++)
            {
                if (x[i] == y[j])
                {
                    printf("YES");
                    break;
                }
                // else
                // {
                //     printf("NO");
                //     break;
                // }
            }
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}
/* https://www.codechef.com/START13C/problems/ADDNDIV */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b, x = 0, flag1 = 0;
        scanf("%d%d", &a, &b);

        int arr[100000];
        int ar[100000];
        int m, n;
        m = 100000 / a;
        n = 100000 / b;

        for (int j = 0; j < m; j++)
        {
            x += a;
            arr[j] = x;
        }

        for (int j = 0; j < n; j++)
        {
            b = b * b;
            ar[j] = b;
        }

        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[j] == ar[k])
                {
                    printf("YES\n");
                    flag1 = 1;
                    break;
                }
            }
            if (flag1 == 1)
            {
                break;
            }
        }
        if (flag1 == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}
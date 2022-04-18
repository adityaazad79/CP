// /* https://www.hackerrank.com/challenges/kangaroo/problem */

#include <stdio.h>

int main()
{
    int x1, v1, x2, v2, flag = 0;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    for (int i = 1; x1 + v1 * i <= x2 + v2 * i; i++)
    {
        if (x1 + v1 * i == x2 + v2 * i)
        {
            printf("YES");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("NO");
    }

    return 0;
}

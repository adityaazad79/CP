/* https://www.hackerrank.com/challenges/compare-the-triplets/problem */

#include <stdio.h>

int main()
{
    int a[3], b[3], n = 0, m = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            n++;
        }
        if (a[i] < b[i])
        {
            m++;
        }
    }

    printf("%d %d", n, m);

    return 0;
}
/* https://www.hackerrank.com/challenges/plus-minus/problem */

#include <stdio.h>

int main()
{
    int n, a;
    float x = 0, y = 0, z = 0, p, q, r;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a < 0)
        {
            x++;
        }
        else if (a > 0)
        {
            y++;
        }
        else
        {
            z++;
        }
    }
    printf("%f\n%f\n%f", y / n, x / n, z / n);

    return 0;
}
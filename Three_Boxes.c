/* https://www.codechef.com/OCT21C/problems/THREEBOX */

#include <stdio.h>

int main()
{
    int t, i, a, b, c, d, n;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        n = 1;
        if (a + b + c <= d)
        {
            printf("%d\n", n);
        }
        else
        {
            if (a > d)
            {
                n++;
            }
            else
            {
                d -= a;
            }

            if (b > d)
            {
                n++;
            }
            else
            {
                d -= b;
            }

            if (c > d)
            {
                n++;
            }
            else
            {
                d -= c;
            }

            printf("%d\n", n);
        }
    }

    return 0;
}
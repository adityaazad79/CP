#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, r1, g1, b1, r2, g2, b2, r3, g3, b3, temp, count = 0, x;
        scanf("%d", &n);
        scanf("%d%d%d%d%d%d%d%d%d", &r1, &g1, &b1, &r2, &g2, &b2, &r3, &g3, &b3);
        if ((g1 != 0) || (r2 != 0))
        {
            if (g1 == r2)
            {
                count += g1;
                g1 = 0;
                r2 = 0;
            }
            else if (g1 < r2)
            {
                count += g1;
                r2 -= g1;
                g1 = 0;
            }
            else
            {
                count += r2;
                g1 -= r2;
                r2 = 0;
            }
        }
        if ((b1 != 0) || (r3 != 0))
        {
            if (b1 == r3)
            {
                count += b1;
                b1 = 0;
                r3 = 0;
            }

            else if (b1 < r3)
            {
                count += b1;
                r3 -= b1;
                b1 = 0;
            }
            else
            {
                count += r3;
                b1 -= r3;
                r3 = 0;
            }
        }
        if ((g3 != 0) || (b2 != 0))
        {
            if (g3 == b2)
            {
                count += g3;
                g3 = 0;
                b2 = 0;
            }
            else if (g3 < b2)
            {
                count += g3;
                b2 -= g3;
                g3 = 0;
            }
            else
            {
                count += b2;
                g3 -= b2;
                b2 = 0;
            }
        }
        if ((g1 != 0) || (r2 != 0))
        {
            if (g1 != 0)
            {
                temp = g1;
            }
            else
            {
                temp = r2;
            }
            count += (2 * temp);
        }
        printf("%d\n", count);
    }

    return 0;
}
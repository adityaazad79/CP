/* https://www.codechef.com/START12C/problems/SPATH3 */

#include <stdio.h>

int main()
{
    int t, n, m, c;
    float r, x, y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        c = 0;
        scanf("%d%d%f%f", &n, &m, &x, &y);
        r = x / y;
        int tx = 1, ty = 1;
        if (r > 0.5)
        {
            do
            {
                tx++;
                ty++;
                c += y;
            } while (tx != n && ty != m);
            if (tx < n)
            {
                do
                {
                    tx++;
                    c += x;
                } while (tx != n);
            }
            else
            {
                do
                {
                    ty++;
                    c += x;
                } while (ty != m);
            }
            printf("%d\n", c);
        }
        else
        {
            if (tx < n)
            {
                do
                {
                    tx++;
                    c += x;
                } while (tx != n);
            }
            if (ty < m)
            {
                do
                {
                    ty++;
                    c += x;
                } while (ty != m);
            }
            printf("%d\n", c);
        }
    }

    return 0;
}
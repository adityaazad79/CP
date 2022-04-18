#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int p, d, c = 1;
        scanf("%d%d", &p, &d);
        for (int j = 0; j < d && j < 10; j++)
        {
            c *= 2;
        }
        if (d > 10)
        {
            c *= 3;
        }
        if (c >= p)
        {
            printf("%d\n", p);
        }
        else
        {
            printf("%d\n", c);
        }
    }

    return 0;
}
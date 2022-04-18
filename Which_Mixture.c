/* https://www.codechef.com/OCT21C/problems/MIXTURE */

#include <stdio.h>

int main()
{
    int t, i, a, b;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);

        if (a > 0)
        {
            if (b > 0)
            {
                printf("Solution\n");
            }
            else
            {
                printf("Solid\n");
            }
        }
        else
        {
            printf("Liquid\n");
        }

    }

    return 0;
}
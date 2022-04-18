/* https://www.codechef.com/LTIME100C/problems/VDATES */

#include <stdio.h>

int main()
{
    int t, i, d, l, r;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d", &d, &l, &r);
        if (d >= l)
        {
            if (d <= r)
            {
                printf("Take second dose now\n");
            }
            else
            {
                printf("Too Late\n");
            }
        }
        else
        {
            printf("Too Early\n");
        }
    }

    return 0;
}
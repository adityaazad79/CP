/* https://www.codechef.com/START11C/problems/FACEDIR */

#include <stdio.h>

int main()
{
    int n, d;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d);
        d = d % 4;
        if (d % 4 == 0)
        {
            printf("North\n");
        }
        else if (d % 3 == 0)
        {
            printf("West\n");
        }
        else if (d % 2 == 0)
        {
            printf("South\n");
        }
        else
        {
            printf("East\n");
        }
    }

    return 0;
}
/* https://www.codechef.com/START11C/problems/FILLGRID */

#include <stdio.h>

int main()
{
    int n, r;
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
    {
        scanf("%d", &r);

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (r == 2)
                {
                    printf("-1 ");
                }
                else if (i == j)
                {
                    printf("-1 ");
                }
                else
                {
                    printf("1 ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
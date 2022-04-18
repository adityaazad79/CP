// https://www.codechef.com/JAN222C/problems/EXAMTIME

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int dd, td, md, ds, ts, ms;
        scanf("%d%d%d%d%d%d", &dd, &td, &md, &ds, &ts, &ms);
        if ((dd + td + md) > (ds + ts + ms))
        {
            printf("Dragon\n");
        }
        else if ((dd + td + md) < (ds + ts + ms))
        {
            printf("Sloth\n");
        }
        else
        {
            if (dd > ds)
            {
                printf("Dragon\n");
            }
            else if (ds > dd)
            {
                printf("Sloth\n");
            }
            else if (dd == ds)
            {
                if (td > ts)
                {
                    printf("Dragon\n");
                }
                else if (ts > td)
                {
                    printf("Sloth\n");
                }
                else
                {
                    printf("Tie\n");
                }
            }
        }
    }

    return 0;
}
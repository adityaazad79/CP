/* https://www.hackerrank.com/challenges/day-of-the-programmer/problem */
/* Year 1918 is ahead of 13 days */

#include <stdio.h>

int leap(int n);

int main()
{
    int n, flag;
    scanf("%d", &n);

    if (n > 1918)
    {
        flag = leap(n);
        if (flag == 1)
        {
            printf("12.09.%d", n);
        }
        else
        {
            printf("13.09.%d", n);
        }
    }
    else
    {
        flag = leap(n);
        if (flag == 1)
        {
            printf("12.09.%d", n);
        }
        else
        {
            if (n == 1918)
            {
                printf("26.09.1918");
            }
            else
            {
                printf("13.09.%d", n);
            }
        }
    }

    return 0;
}

int leap(int a)
{
    int flag;
    if (a > 1918)
    {

        if (a % 400 == 0)
        {
            flag = 1;
        }
        else if (a % 100 == 0)
        {
            flag = 0;
        }
        else if (a % 4 == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    else
    {
        if (a % 4 == 0)
        {
            flag = 1;
        }
    }

    return flag;
}
/* https://www.hackerrank.com/challenges/grading/problem */

#include <stdio.h>

int main()
{
    int n, m, r;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (m > 37)
        {

            r = m % 5;
            if (r > 2)
            {
                if (r == 3)
                {
                    m += 2;
                }
                else if (r == 4)
                {
                    m += 1;
                }
            }
        }
        printf("%d\n", m);
    }
    return 0;
}
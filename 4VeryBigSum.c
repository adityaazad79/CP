/* https://www.hackerrank.com/challenges/a-very-big-sum/problem */

#include <stdio.h>
int main()
{
    long int n, m, s = 0;
    scanf("%ld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &m);
        s += m;
    }
    printf("%ld", s);
    return 0;
}
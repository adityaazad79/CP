/* https://www.codechef.com/START12C/problems/MAKEDIV3 */
// Incomplete

#include <stdio.h>
#include <math.h>

int count(int n)
{
    int count = 0;
    do
    {
        n /= 10;
        ++count;
    } while (n != 0);
    return count;
}

int main()
{
    int n, i, t, c, v;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &t);
        c = count(t);
        v = pow(10, (t - 1));
        printf("%d", v);
        for (int i = 0; i <; i++)
        {

        }
    }

    return 0;
}
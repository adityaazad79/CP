/* https://www.hackerrank.com/challenges/time-conversion/problem */

#include <stdio.h>
#include <string.h>

int main()
{
    char time[3];
    int h, m, s;
    scanf("%d:%d:%d%s", &h, &m, &s, time);
    if (strcmp(time, "PM") == 0 && h < 12)
    {
        h += 12;
    }
    else if (strcmp(time, "AM") == 0 && h == 12)
    {
        h = 0;
    }
    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}
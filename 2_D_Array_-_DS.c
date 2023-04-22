/* https://www.hackerrank.com/challenges/2d-array/problem?isFullScreen=true */

#include <stdio.h>
#include <limits.h>
#define MAX(x, y) (x > y ? x : y)

int main()
{
    int arr[6][6], i, j, max = INT_MIN;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            scanf("%d", &arr[i][j]);

    int val[4][4];
    for (i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            val[i][j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            max = MAX(max, val[i][j]);
        }
    }

    printf("%d", max);

    return 0;
}
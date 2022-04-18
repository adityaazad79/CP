#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int *arr, n, temp, c = 0, flag = 1, count = -1;
    cin >> n;
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (((arr[i + 1] - arr[i] == 1) || (arr[i + 1] - arr[i] == 0)) && c == 0)
        {
            temp = arr[i];
            c++;
            flag = 0;
            if (count < c)
            {
                count = c;
            }
        }
        else if ((arr[i + 1] - temp == 1) || (arr[i + 1] - temp == 0))
        {
            c++;
            if (count < c)
            {
                count = c;
            }
        }
        else
        {
            c = 0;
        }
    }

    if (flag)
    {
        cout << count << endl;
    }
    else
    {
        cout << count + 1 << endl;
    }

    return 0;
}
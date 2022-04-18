#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
// void Size(int arr[]);
void Size(int arr[])
{
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    for (int i = 0; i < 50; i++)
    {
        // printf("%d\n", *(arr + i));
    }
}
int main()
{
    int arr[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    Size(arr);
    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d\n", *(arr + i));
    // }
    return 0;
}
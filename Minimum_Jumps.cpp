// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int fun(int arr[], int n)
// {
//     if (arr[0] == 0)
//         return -1;

//     int max=arr[0];
//     int temp_max=-1;
//     int count=0;
//     int index=0;
//     int ic=0;

//     for (int i = 0; i < n; i++)
//     {
//         ic=0;
//         while (max--)
//         {
//             if (arr[i] > temp_max)
//             {
//                 temp_max = arr[i];
//                 index=i;
//             }
//             ic++;
//             i++;
//         }
//         max=temp_max;
//         temp_max=-1;
//         i-=ic;
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     int arr[n];
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << fun(arr, n) << endl;

//     return 0;
// }
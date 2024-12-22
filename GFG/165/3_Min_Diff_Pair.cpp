// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int fun(int n, vector<int> &arr, int x)
// {
//     int ans = INT_MAX;
//     bool flag = 1;
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if ((temp ^ arr[i]) <= x)
//         {
//             ans = temp ^ arr[i];
//             flag = 0;
//             x = ans;
//             // cout<<temp<<" "<<arr[i]<<endl;
//             // cout<<(temp^arr[i])<<endl;
//         }
//         temp = arr[i];
//     }
//     if (flag)
//         return -1;
//     return ans;
// }

// int fun2(int n, vector<int> &arr, int x)
// {
//     sort(arr.begin(), arr.end());
//     int ans = INT_MAX;
//     bool flag = 1;
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if ((temp ^ arr[i]) <= x)
//         {
//             ans = temp ^ arr[i];
//             flag = 0;
//             x = ans;
//             // cout<<temp<<" "<<arr[i]<<endl;
//             // cout<<(temp^arr[i])<<endl;
//         }
//         temp = arr[i];
//     }
//     if (flag)
//         return -1;
//     return ans;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     vector<int> arr;
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> temp;
//         arr.push_back(temp);
//     }

//     int x;
//     cin >> x;

//     // cout << fun(n, arr, x) << endl;
//     cout << fun2(n, arr, x) << endl;
//     // cout<<(80^48)<<endl;

//     return 0;
// }
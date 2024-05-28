// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int fun(const string A, const string B)
// {
//     int A_size = A.size();
//     int B_size = B.size();
//     int i = 0, j = 0;
//     string temp;
//     for (; i < A_size && j < B_size;)
//     {
//         if (A[i] == B[j])
//         {
//             i++;
//             j++;
//             // continue;
//         }
//         else if (B[j] == '*' || B[j] == '?')
//         {
//             if (B[j] == '*')
//             {
//                 // while(B[j]=='*' && B[j]!=A[i] && i<A_size){
//                 while (B[j] != A[i] && i < A_size)
//                 {
//                     i++;
//                 }
//                 j++;
//                     cout << B[j] << endl;
//                     cout << A[i] << endl;
//                 if (B[j] != A[i] && i < A_size)
//                 {
//                     j--;
//                 }
//             }
//             else
//             {
//                 i++;
//                 j++;
//             }
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     if (i == A_size && j == B_size)
//         return 1;
//     return 0;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     string A, B;
//     cin >> A >> B;

//     cout << fun(A, B) << endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> afterCOperations(int A, int B, int C) {
//     int cycle = 2;
//     int a = A, b = B;
//     int i=1;
//     while (C > 0) {
//         // if (C % cycle == 0) {
//             A = b - 2 * a;
//             B = 2 * b + a;
//         // }
//         C--;
//         cycle *= 2;
//         a = A, b = B;
//         cout<<"After iteration "<<i<<" ---> A :"<<a<<" b : "<<b<<endl;
//         i++;
//     }
//     return make_pair(a, b);
// }

// int main() {
//     int A, B, C;
//     cout << "Enter the initial values of A and B: ";
//     cin >> A >> B;
//     cout << "Enter the number of operations: ";
//     cin >> C;
//     pair<int, int> result = afterCOperations(A, B, C);
//     cout << "The value of pair after " << C << "th operation is (" << result.first << ", " << result.second << ")" << endl;
//     return 0;
// }
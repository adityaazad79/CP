// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// vector<vector<int>> fun(vector<int> &A, int B)
// {
//     int size = A.size();
//     sort(A.begin(), A.end());
//     int target;
//     set<vector<int>>ans;

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             for (int k = j + 1; k < size; k++)
//             {
//                 target = B - A[i] - A[j] - A[k];
//                 if (binary_search(A.begin() + k + 1, A.end(), target)){
//                     ans.insert({A[i],A[j],A[k],target});
//                 }
//             }
//         }
//     }
//     return vector<vector<int>>(ans.begin(), ans.end());
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     int t;
//     cin >> t;
//     vector<int> A;
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> temp;
//         A.push_back(temp);
//     }

//     vector<vector<int>> ans = fun(A, t);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
    

//     return 0;
// }

Better approach possible
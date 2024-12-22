// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int fun(vector<int>&A){
//     int size=A.size();
//     if(size<=2)
//         return 0;
    
//     unordered_map<int,bool>ump(size);

//     for (int i = 0; i < size; i++)
//     {
//         ump[A[i]]=1;
//     }
//     int ans=-1;
//     // for (int i = 0; i <= ump.size(); i++)
//     // {
        
//     // }
//     for(auto &i:ump)
//         cout<<i.first<<" "<<i.second<<endl;
//     cout<<endl;
//     cout<<endl;
    
//     return 0;

// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin>>n;
//     int temp;
//     vector<int>A;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>temp;
//         A.push_back(temp);
//     }

//     cout<<fun(A)<<endl;
    

//     return 0;
// }
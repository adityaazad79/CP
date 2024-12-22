// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// string fun(string A){
//     int size=A.size();
//     int i=0,j=size-1;
//     bool flag=1;
//     int s=-1,end=-1;
//     while(i<j)
//     {
//         if(A[i]==A[j]){
//             if(flag){
//                 s=i;
//                 flag=0;
//             }
//             if(j-i<=1)
//                 end=j;
//             i++;
//             j--;
//             continue;
//         }
//         flag=1;
//         j=size-1;
//         i++;
//     }
    
//     if(s==-1 || end==-1)
//         return A.substr(0,1);

//     return A.substr(s,end);
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     string S;
//     cin>>S;
//     cout<<fun(S)<<endl;

//     return 0;
// }
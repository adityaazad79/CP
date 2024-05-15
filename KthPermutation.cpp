Incomplete

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1000003;
// /*
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
// */
// int fun(string A){
//     int size=A.size();
//     int sz=size-1;
//     ll ans=1,ct=0;
//     vector<ll>f(size,1); // Storing factorial
//     size++;
//     int i,j;
//     for (i=1;i<size; i++) // Calculate factorial
//         f[i]=(f[i-1]*i)%M; 
//     size--;
//     for (i=0;i<size;i++)
//     {
//         ct=0;
//         for (j=i+1;j<size;j++)
//         {
//             if(A[i]>A[j]>0) // Checking how many characters are smaller than the current character
//                 ct++;
//         }
//         ans=(ans+((ct)*f[sz--])%M)%M; // Add the factorial for the no of smaller characters
//     }
//     return ans;   
// }

// vector<int>fun2(int A, long B){
//     vector<ll>fact(A,1);
//     // fact[0]=1;
//     int i;
//     for (i=1;i<A; i++)
//         fact[i]=fact[i-1]*i;

//     for (int i = 0; i < A; i++)
//         cout<<fact[i]<<" ";
    
//     int ct=0;
//     while(B>0){
//         // if(B-fact[A]>0){
//             B-=fact[A--];
//             ct++;
//         // }
//     }
//     cout<<endl;
//     cout<<"ct : "<<ct<<endl;

//     return {1,2};
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     // string s;
//     // cin>>s;
//     // cout<<fun(s)<<endl; 


//     int a,b;
//     cin>>a>>b;
//     vector<int>V=fun2(a,b);   

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int fun(string A){
//     int size=A.size();
//     if(A[size-1]%2)
//         return 0;
//     for (int i=0;i<size;i++)
//     {
//         if(A[i]>='0' && A[i]<='9')
//             continue;
//         return 0;
//     }
//     int z=0;
//     for (int i=0;i<size;i++)
//     {
//         if(A[i]=='0')
//             z++;
//         else
//             break;
//     }
//     A=A.substr(z,size-z);
//     size=A.size();

//     while(A[size-1]%2==0){
        
//     }


//     cout<<A<<endl;
    
//     return 1;
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
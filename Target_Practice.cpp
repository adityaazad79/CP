// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin>>t;
//     while(t--){
//         char temp;
//         int sum=0;
//         for (int i = 0; i < 10; i++)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 cin>>temp;
//                 if(temp=='X'){
//                     sum=sum+min()
//                 }

//             }

//         }

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << i << j << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // cout<<i<<j<<" ";
            cout << min(i, j) + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
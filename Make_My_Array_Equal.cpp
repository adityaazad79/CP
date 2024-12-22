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
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int temp1, temp2;
//         if(n==1){
//             cin>>temp1;
//             cout<<"YES"<<endl;
//         }
//         cin >> temp1;
//         bool flag = 1;
//         for (int i = 1; i < n; i++)
//         {
//             cin >> temp2;
//             if (!flag)
//             {
//                 continue;
//             }
//             else if (temp2 == 0 || temp1 == temp2)
//             {
//                 temp1 = temp2;
//                 continue;
//             }
//             else if (flag)
//             {
//                 flag = 0;
//                 cout << "NO" << endl;
//             }
//             temp1=temp2;
//         }
//         if (flag == 1)
//         {
//             cout << "YES" << endl;
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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>ump;
        int temp;
        bool flag=1;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            if(temp!=0 && flag){
                ump[temp]++;
                if(ump.size()>1){
                    flag=0;
                    cout<<"NO"<<endl;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;

        
    }

    return 0;
}
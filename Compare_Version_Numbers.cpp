// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int fun(string A,string B){
//     int size_A=A.size();
//     int size_B=B.size();
//     vector<int>S1;
//     vector<int>S2;
//     string temp="";
//     for (int i=0;i<size_A;i++)
//     {
//         temp.push_back(A[i]);
//         if(A[i]=='.'){
//             temp.pop_back();
//             S1.push_back(stoi(temp));
//             temp="";
//         }
//     }
//     S1.push_back(stoi(temp));
//     temp="";
//     for (int i=0;i<size_B;i++)
//     {
//         temp.push_back(B[i]);
//         if(B[i]=='.'){
//             temp.pop_back();
//             S2.push_back(stoi(temp));
//             temp="";
//         }
//     }
//     S2.push_back(stoi(temp));

//     // for(auto i:S1)
//     //     cout<<i<<" ";
//     // cout<<endl;

//     // for(auto i:S2)
//     //     cout<<i<<" ";
//     // cout<<endl;

//     int size_S1=S1.size();
//     int size_S2=S2.size();

//     for (int i=0;i<size_S1&&i<size_S2;i++)
//     {
//         if(S1[i]==S2[i])
//             continue;
//         else if(S1[i]>S2[i])
//             return 1;
//         else
//             return -1;
//     }
//     if(size_S1==size_S2)
//         return 0;
//     else if(size_S1==size_S2)
//         return 1;
//     else
//         return -1;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     string A,B;
//     cin>>A>>B;

//     cout<<fun(A,B)<<endl;

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

int fun(string A,string B){
    int size1=A.size();
    int size2=B.size();

    for (int i = 0,j=0; i < size1 && j<size2; i++,j++)
    {
        if(A[i]==B[j])
            continue;
        else if(A[i]>B[j])
            return 1;
        else if(A[i]<B[j])
            return -1;
        if(A[i]=='.' && ((B[j]-48)>0 && (B[j]-48)<10))
            return -1;
        if(B[j]=='.' && ((A[i]-48)>0 && (A[i]-48)<10))
            return 1;
        // else
    }
    // if(size1>size2)
        // return 1;
    return 0;    
}

int fun2(string A, string B){
        vector<int> X,Y;
    string str;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='.')
        {
            int x = stoi(str);
            X.push_back(x);
        }
        else
        {
            str+=A[i];
        }
    }
    str="";
    for(int i=0;i<B.size();i++)
    {
        if(B[i]=='.')
        {
            int x = stoi(str);
            Y.push_back(x);
        }
        else
        {
            str+=B[i];
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A,B;
    cin>>A>>B;

    cout<<fun(A,B)<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(vector<string> &A)
{
    // int sz=A.size();
    // string ans;
    // int sm=INT_MAX;
    // int temp;
    // for (int i = 0; i < sz; i++)
    // {
    //     temp=A[i].size();
    //     if(sm>temp)
    //         sm=temp;
    // cout<<"sm : "<<sm<<" A[i] : "<<A[i].size()<<endl;
    // }
    // char t;
    // // int c=0;
    // bool flag=1;
    // for (int i = 0; i < sz; i++)
    // {
    //     flag=1;
    //     t=A[0][i];
    //     for (int j = 0; j < sm; j++)
    //     {
    //         if(A[j][i]==t)
    //             continue;
    //         flag=0;

    //     }
    //     if(flag)
    //         ans.push_back(t);
    // }
    // return ans;

    if (A.empty())
        return "";

    string prefix=A[0];
    for (int i=1;i<A.size();i++)
    {
        while (A[i].find(prefix)!=0)
        {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty())
                return "";
        }
    }
    return prefix;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> A;
    // A.push_back("abcdefgh");
    // A.push_back("aefghijk");
    // A.push_back("abcefgh");

    A.push_back("ab");
    A.push_back("abab");
    A.push_back("a");

    cout << fun(A) << endl;

    return 0;
}
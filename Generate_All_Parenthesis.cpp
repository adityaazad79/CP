#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A){
    int size=A.size();

    unordered_map<char,int>ump;
    ump['(']=1;
    ump[')']=-1;
    ump['{']=2;
    ump['}']=-2;
    ump['[']=3;
    ump[']']=-3;

    int ct=0;
    stack<char>S;
    char temp;
    for (int i = 0; i < size; i++)
    {
        if(ump[A[i]]>0)
            S.push(A[i]);
        else if(S.empty())
            return 0;
        else{
            temp=S.top();
            S.pop();
            if(ump[temp]+ump[A[i]]!=0)
                return 0;
        }
    }
    if(S.empty())
        return 1;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    cin>>A;

    cout<<fun(A)<<endl;

    return 0;
}
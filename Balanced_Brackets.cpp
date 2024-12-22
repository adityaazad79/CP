#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(string A){
    int size=A.size();
    stack<char>st;
    for (int i=0;i<size;i++)
    {
        if(A[i]=='[' || A[i]=='{' || A[i]=='(')
            st.push(A[i]);
        else if(!st.empty() && A[i]==']')
            if(st.top()=='[')
                st.pop();
            else
                return "NO";
        else if(!st.empty() && A[i]=='}')
            if(st.top()=='{')
                st.pop();
            else
                return "NO";
        else if(!st.empty() && A[i]==')')
            if(st.top()=='(')
                st.pop();
            else
                return "NO";
        else
            return "NO";
    }
    if(st.empty())
        return "YES";
    return "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    string S;
    while (t--)
    {
        cin>>S;
        cout<<fun(S)<<endl;
    }
        

    return 0;
}
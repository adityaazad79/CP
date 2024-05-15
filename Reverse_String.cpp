#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(string A){
    stack<char>s;
    for (int i = 0; A[i]!='\0'; i++)
    {
        s.push(A[i]);
    }
    int size=s.size();
    for(int i=0;i<size;i++){
        A[i]=s.top();
        s.pop();
    }
    
    return A;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    cout<<fun(s)<<endl;

    return 0;
}
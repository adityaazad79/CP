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
    if(size>15 || size<8)
        return 0;
    
// Password should have at least one numerical digit(0-9).
// Password's length should be in between 8 to 15 characters.
// Password should have at least one lowercase letter(a-z).
// Password should have at least one uppercase letter(A-Z).
// Password should have at least one special character ( @, #, %, &, !, $, *)

    bool fn=0,fl=0,fu=0,fc=0;
    for (int i = 0; i < size; i++)
    {
        if(A[i]=='@' || A[i]== '#' || A[i]=='%' || A[i]=='&' || A[i]=='!' || A[i]=='$' || A[i]=='*')
            fc=1;
        else if(A[i]-'A'>=0 && A[i]-'A'<26)
            fu=1;
        else if(A[i]-'a'>=0 && A[i]-'a'<26)
            fl=1;
        else if(A[i]=='0' || A[i]=='1' || A[i]=='2' || A[i]=='3' || A[i]=='4' || A[i]=='5' || A[i]=='6' || A[i]=='7' || A[i]=='8' || A[i]=='9')
            fn=1;
    }
    if(fn & fl & fu & fc)
        return 1;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    cin>>S;
    cout<<fun(S)<<endl;

    return 0;
}
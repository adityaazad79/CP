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
    string ans;
    int x=0;
    for (int i=0;i<size;i++)
    {
        if(A[i]>64 && A[i]<91)
            ans=ans+char(A[i]+32);
        else if(A[i]>96 && A[i]<123)
            ans=ans+(A[i]);
        else if(A[i]>47 && A[i]<58)
            ans=ans+A[i];
    }
    size=ans.size();
    int size2=size;
    size2/=2;
    size--;
    for(int i=0;i<size2;i++){
        if(ans[i]==ans[size--])
            continue;
        return 0;
    }

    return 1;
}

int fun2(string A){
    vector<char>alph;
    for(char c: A)
        if(isalnum(c))
            alph.push_back(tolower(c));
    int size=alph.size();
    int size2=size-1;
    size/=2;
    for(int i=0;i<size;i++)
        if(alph[i]!=alph[size2-i])
            return 0;
    return 1;
}

int fun3(string A){
    int size=A.size();
    string ans="";
    int x=0;
    for (int i=0;i<size;i++)
    {
        if(A[i]>64 && A[i]<91)
            // ans.append(to_string(A[i]+32));
            ans.push_back(char(A[i]+32));
        else if(A[i]>96 && A[i]<123)
            // ans.append(to_string(A[i]));
            ans.push_back(A[i]);
        else if(A[i]>47 && A[i]<58)
            // ans=ans+A[i];
            // ans.append(to_string(A[i]));
            ans.push_back(A[i]);
        // if(isalnum(A[i]))
            // ans.append(to_string(tolower(A[i])));
    }
    // cout<<ans<<endl;
    size=ans.size();
    int size2=size;
    size2/=2;
    size--;
    for(int i=0;i<size2;i++){
        if(ans[i]==(ans[size--]))
            continue;
        return 0;
    }

    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string s;
    // cin>>s;
    // s="A man, a plan, a canal: Panama";
    // s="race a car";
    s="1a2";
    cout<<fun3(s)<<endl;

    return 0;
}